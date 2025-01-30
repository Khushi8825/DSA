for(int i=Sr; i<=er&& count<total_elements; i++){
            ans.push_back(a[i][ec]);
            count++;
        }
            ec--;
        for(int i=ec; i<=sc&& count<total_elements; i--){
            ans.push_back(a[er][i]);
            count++;
        }
            er--;
        for(int i=er; i<=Sr&& count<total_elements; i--){
            ans.push_back(a[i][sc]);
            count++;
        }
            sc++;