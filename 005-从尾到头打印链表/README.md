# 从尾到头打印链表
最优雅的方式大概就是用函数的方式从尾到头打印了，函数式语言写多了就容易第一时间想到这种没用的解法，但这样堆栈的开销很大，还不如先一次放到vector里面再来一个reverse。

面试官想考的应该是使用`ListNode`存储前面的数据吧，这也是很基本的题了，没什么好说的。

PS：仔细想想reverse的方法更加cache friendly，毕竟dereference的开销很大，所以实际上reverse才是optimal的方法。
