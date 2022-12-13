import java.io.File

fun main() {

    val nums = File("D:\\cprograms\\12_11_21\\programming_data_structure\\kt\\text.txt").readLines().map(String::toInt)
    println(nums)
    val comp=nums.associateBy { 2020-it }

    for(num in nums) {
        if(comp[num]!=null) {
            val p=Pair(num,comp[num])
            println(p)
           
            val f=p.first
            val s=p.second
            )
            break
        }
    }
}