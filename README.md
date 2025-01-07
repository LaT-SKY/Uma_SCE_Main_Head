# public方法
### UmaSCE_Main()
构造函数，初始化UmaSCE_Main类的对象
### ~UmaSCE_Main()
析构函数，销毁UmaSCE_Main类的对象，虽然什么都没有写，但是你可以调用它玩一下：)
### Exchange(UmaSCE_Main&)
交换两个UmaSCE_Main类的对象
~~~cpp
UmaSCE_Main uma1,uma2;
uma1.Import(0, 10, 30, 0, 0, 0, 35, 0, 0, 0, 6, 0, 0);
uma2.Exchange(uma1);
~~~
### Copy(UmaSCE_Main&)
复制一个UmaSCE_Main类的对象
~~~cpp
UmaSCE_Main uma1,uma2;
uma1.Import(0, 10, 30, 0, 0, 0, 35, 0, 0, 0, 6, 0, 0);
uma2.Copy(uma1);
~~~
### Input(string Val_Typename,int Val)
输入一个UmaSCE_Main类的对象</br>
Val_Typename:输入的类型</br>
Val:输入的值
~~~cpp
UmaSCE_Main uma1;
uma1.Input("type_static",0);
~~~
### Output(string Val_Typename)