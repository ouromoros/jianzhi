# 替换空格
在思考了一会儿如何只用one pass完成这道题之后放弃了，还是用bug free的简单方式解决。

由于替换的字符是确定的，因此可以计算空格的个数，然后计算出处理后的字符串长度，创建一个新的char数组来装处理的数组，然后再复制回去。

看了答案之后就想，我有过这个思路啊，倒着复制、先计算长度这两件事情我都想到了，为什么没有合起来想呢...太naive了。简单说一下吧：就是同样先计算长度，然后倒着一个个复制过去就行了，因为并不会发生重叠的问题。

PS：最后答案甚至只用注释几行加一点改动...
