#!/bin/bash
#Program:

#History:
PATH=/bin:/sbin:/usr/bin:usr/sbin:usr/local/bin:usr/local/sbin:~/bin:
export PATH

....

#单个条件判断
if[condition];then
	程序段
fi

#多重条件判断
if[condition]；then
	程序段
elif[condition]；then
	程序段
else
	程序段
fi


#case...esac 判断
case $变量名称 in
"第一个变量内容")
	程序段
	;;
"第二个变量内容")
	程序段
	;;
*)
	exit 1
	;;
esac


#function 功能  必须放在程序最前面
function fname(){
	程序段
}


#循环(loop)
while [condition]
do
	程序段
done

until [condition]
do
	程序段
done


#for...do...done(固定循环)
for var in con1 con2 con3 ...
do 
	程序段
done

for num in $(seq 1 100)
do
	程序段
done

for var in $cons
do
	程序段
done

for((初始值;限制值;执行步阶))
do
	程序段
done


#shell script的追踪与debug
sh [-nvx] script.sh
选项与参数：
-n:不要执行script，仅查询语法问题
-v:在执行script之前，先将script的内容输出到屏幕上
-x:将使用到的script内容显示到屏幕上（重要）
























	


