import java.util.*

fun helper(aInput: Int, bInput: Int, c: Int, d: Int): Int {
    var a = aInput
    var b = bInput
    var count = 0

    while (a != c && b != d) {
        if (a < b) {
            a += 1
            count++
        } else if (b < a) {
            b += 1
            count++
        } else {
            a += 1
            b += 1
            count++
        }
    }

    while (a != c) {
        a += 1
        count++
    }

    while (b != d) {
        b += 1
        count++
    }

    return count
}

fun main() {
    val scanner = Scanner(System.`in`)
    val t = scanner.nextInt()

    repeat(t) {
        val a = scanner.nextInt()
        val b = scanner.nextInt()
        val c = scanner.nextInt()
        val d = scanner.nextInt()

        val ans = helper(a, b, c, d)
        println(ans)
    }
}