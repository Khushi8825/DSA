#include <bits/stdc++.h>
using namespace std;
struct Seg{int x1,y1,x2,y2;};
long long cross(long long x1,long long y1,long long x2,long long y2,long long x3,long long y3){
    return (x2-x1)*(y3-y1) - (y2-y1)*(x3-x1);
}
bool onSegment(int x1,int y1,int x2,int y2,int x,int y){
    if(cross(x1,y1,x2,y2,x,y)!=0) return false;
    if(min(x1,x2) <= x && x <= max(x1,x2) && min(y1,y2) <= y && y <= max(y1,y2)) return true;
    return false;
}
bool segInter(const Seg &a,const Seg &b){
    long long d1 = cross(a.x1,a.y1,a.x2,a.y2,b.x1,b.y1);
    long long d2 = cross(a.x1,a.y1,a.x2,a.y2,b.x2,b.y2);
    long long d3 = cross(b.x1,b.y1,b.x2,b.y2,a.x1,a.y1);
    long long d4 = cross(b.x1,b.y1,b.x2,b.y2,a.x2,a.y2);
    if(((d1>0 && d2<0) || (d1<0 && d2>0)) && ((d3>0 && d4<0) || (d3<0 && d4>0))) return true;
    if(d1==0 && onSegment(a.x1,a.y1,a.x2,a.y2,b.x1,b.y1)) return true;
    if(d2==0 && onSegment(a.x1,a.y1,a.x2,a.y2,b.x2,b.y2)) return true;
    if(d3==0 && onSegment(b.x1,b.y1,b.x2,b.y2,a.x1,a.y1)) return true;
    if(d4==0 && onSegment(b.x1,b.y1,b.x2,b.y2,a.x2,a.y2)) return true;
    return false;
}
pair<int,int> findCentre(const vector<Seg>& segs){
    for(size_t i=0;i<segs.size();++i){
        for(size_t j=i+1;j<segs.size();++j){
            if(segInter(segs[i],segs[j])){
                if(onSegment(segs[i].x1,segs[i].y1,segs[i].x2,segs[i].y2,segs[j].x1,segs[j].y1)) return {segs[j].x1,segs[j].y1};
                if(onSegment(segs[i].x1,segs[i].y1,segs[i].x2,segs[i].y2,segs[j].x2,segs[j].y2)) return {segs[j].x2,segs[j].y2};
                if(onSegment(segs[j].x1,segs[j].y1,segs[j].x2,segs[j].y2,segs[i].x1,segs[i].y1)) return {segs[i].x1,segs[i].y1};
                if(onSegment(segs[j].x1,segs[j].y1,segs[j].x2,segs[j].y2,segs[i].x2,segs[i].y2)) return {segs[i].x2,segs[i].y2};
                long long A1 = segs[i].y2 - segs[i].y1;
                long long B1 = segs[i].x1 - segs[i].x2;
                long long C1 = A1*segs[i].x1 + B1*segs[i].y1;
                long long A2 = segs[j].y2 - segs[j].y1;
                long long B2 = segs[j].x1 - segs[j].x2;
                long long C2 = A2*segs[j].x1 + B2*segs[j].y1;
                long long det = A1*B2 - A2*B1;
                if(det!=0){
                    long long ix = (C1*B2 - C2*B1);
                    long long iy = (A1*C2 - A2*C1);
                    if(ix % det == 0 && iy % det == 0){
                        ix /= det; iy /= det;
                        if(onSegment(segs[i].x1,segs[i].y1,segs[i].x2,segs[i].y2,(int)ix,(int)iy) &&
                           onSegment(segs[j].x1,segs[j].y1,segs[j].x2,segs[j].y2,(int)ix,(int)iy))
                            return {(int)ix,(int)iy};
                    }
                }
            }
        }
    }
    return {segs[0].x1,segs[0].y1};
}
int main(){
    int n; if(!(cin>>n)) return 0;
    vector<Seg> segs(n);
    for(int i=0;i<n;i++) cin>>segs[i].x1>>segs[i].y1>>segs[i].x2>>segs[i].y2;
    int sx,sy,dx,dy; cin>>sx>>sy>>dx>>dy;
    vector<int> used(n,0);
    vector<vector<int>> starsSegs;
    for(int i=0;i<n;i++){
        if(used[i]) continue;
        queue<int>q; q.push(i); used[i]=1;
        vector<int> comp;
        while(!q.empty()){
            int u=q.front(); q.pop(); comp.push_back(u);
            for(int j=0;j<n;j++) if(!used[j]){
                if(segInter(segs[u],segs[j])){ used[j]=1; q.push(j); }
            }
        }
        starsSegs.push_back(comp);
    }
    int S = starsSegs.size();
    vector<pair<int,int>> centre(S);
    for(int i=0;i<S;i++){
        vector<Seg> v;
        for(int id: starsSegs[i]) v.push_back(segs[id]);
        centre[i] = findCentre(v);
    }
    auto pointOnStar = [&](int i,int x,int y)->bool{
        for(int id: starsSegs[i]) if(onSegment(segs[id].x1,segs[id].y1,segs[id].x2,segs[id].y2,x,y)) return true;
        return false;
    };
    vector<int> startStars, endStars;
    for(int i=0;i<S;i++){
        if(pointOnStar(i,sx,sy)) startStars.push_back(i);
        if(pointOnStar(i,dx,dy)) endStars.push_back(i);
    }
    vector<int> maxOrth(S,0), maxDiag(S,0);
    for(int i=0;i<S;i++){
        int cx = centre[i].first, cy = centre[i].second;
        for(int id: starsSegs[i]){
            int x1 = segs[id].x1, y1 = segs[id].y1, x2 = segs[id].x2, y2 = segs[id].y2;
            if(onSegment(x1,y1,x2,y2,cx,cy)){
                if(x1==x2){
                    int d1 = abs(y1-cy), d2 = abs(y2-cy);
                    maxOrth[i] = max(maxOrth[i], max(d1,d2));
                } else if(y1==y2){
                    int d1 = abs(x1-cx), d2 = abs(x2-cx);
                    maxOrth[i] = max(maxOrth[i], max(d1,d2));
                } else {
                    int d1x = abs(x1-cx), d1y = abs(y1-cy);
                    int d2x = abs(x2-cx), d2y = abs(y2-cy);
                    if(d1x==d1y) maxDiag[i] = max(maxDiag[i], d1x);
                    if(d2x==d2y) maxDiag[i] = max(maxDiag[i], d2x);
                }
            } else {
                if(x1==cx && y1==cy){ int d = max(abs(x2-cx), abs(y2-cy));
                    if(x2==cx || y2==cy) maxOrth[i]=max(maxOrth[i], d);
                    else if(abs(x2-cx)==abs(y2-cy)) maxDiag[i]=max(maxDiag[i], d);
                }
                if(x2==cx && y2==cy){ int d = max(abs(x1-cx), abs(y1-cy));
                    if(x1==cx || y1==cy) maxOrth[i]=max(maxOrth[i], d);
                    else if(abs(x1-cx)==abs(y1-cy)) maxDiag[i]=max(maxDiag[i], d);
                }
            }
        }
    }
    vector<vector<int>> g(S);
    for(int i=0;i<S;i++) for(int j=0;j<S;j++) if(i!=j){
        int x1 = centre[i].first, y1 = centre[i].second;
        int x2 = centre[j].first, y2 = centre[j].second;
        int dxC = x2 - x1, dyC = y2 - y1;
        if(dxC==0){
            int dist = abs(dyC);
            if(maxOrth[i]>0 && maxOrth[j]>0 && maxOrth[i] + maxOrth[j] >= dist) g[i].push_back(j);
        } else if(dyC==0){
            int dist = abs(dxC);
            if(maxOrth[i]>0 && maxOrth[j]>0 && maxOrth[i] + maxOrth[j] >= dist) g[i].push_back(j);
        } else if(abs(dxC) == abs(dyC)){
            int dist = abs(dxC);
            if(maxDiag[i]>0 && maxDiag[j]>0 && maxDiag[i] + maxDiag[j] >= dist) g[i].push_back(j);
        }
    }
    vector<int> distV(S, -1);
    queue<int>qq;
    for(int s: startStars){ distV[s]=1; qq.push(s); }
    while(!qq.empty()){
        int u=qq.front(); qq.pop();
        for(int v: g[u]) if(distV[v]==-1){ distV[v]=distV[u]+1; qq.push(v); }
    }
    int bestAns = INT_MAX;
    for(int e: endStars) if(distV[e]!=-1) bestAns = min(bestAns, distV[e]);
    if(bestAns != INT_MAX){
        cout<<bestAns;
        return 0;
    }
    int minShift = INT_MAX;
    for(int i=0;i<S;i++) if(distV[i]!=-1){
        for(int id: starsSegs[i]){
            int x1 = segs[id].x1, y1 = segs[id].y1, x2 = segs[id].x2, y2 = segs[id].y2;
            int steps = max(abs(x2-x1), abs(y2-y1));
            int sxstep = (x2==x1)?0:((x2>x1)?1:-1);
            int systep = (y2==y1)?0:((y2>y1)?1:-1);
            int cx = x1, cy = y1;
            for(int t=0;t<=steps;t++){
                int shift = max(abs(cx - dx), abs(cy - dy));
                if(shift < minShift) minShift = shift;
                cx += sxstep; cy += systep;
            }
        }
    }
    if(minShift==INT_MAX) minShift=0;
    cout<<minShift;
    return 0;
}
