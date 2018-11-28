# 二进制中1的个数
一个经典的问题，叫Hamming Weights，有兴趣可以看一下StackOverFlow上[这个问题](https://stackoverflow.com/questions/109023/how-to-count-the-number-of-set-bits-in-a-32-bit-integer)的答案，都是很巧妙的解法，这里给出一个能看懂的方法：

观察到n-1之后和原数n相比有从最低位到从低往高第一个出现1的比特位都翻转了，因此(n-1)&n就是n将最低的1的比特位置为0得到的数，于是我们可以每次消去一个1，并count++，得到1的个数。
