# public����
### UmaSCE_Main()
���캯������ʼ��UmaSCE_Main��Ķ���
### ~UmaSCE_Main()
��������������UmaSCE_Main��Ķ�����Ȼʲô��û��д����������Ե�������һ�£�)
### Exchange(UmaSCE_Main&)
��������UmaSCE_Main��Ķ���
~~~cpp
UmaSCE_Main uma1,uma2;
uma1.Import(0, 10, 30, 0, 0, 0, 35, 0, 0, 0, 6, 0, 0);
uma2.Exchange(uma1);
~~~
### Copy(UmaSCE_Main&)
����һ��UmaSCE_Main��Ķ���
~~~cpp
UmaSCE_Main uma1,uma2;
uma1.Import(0, 10, 30, 0, 0, 0, 35, 0, 0, 0, 6, 0, 0);
uma2.Copy(uma1);
~~~
### Input(string Val_Typename,int Val)
����һ��UmaSCE_Main��Ķ���</br>
Val_Typename:���������</br>
Val:�����ֵ
~~~cpp
UmaSCE_Main uma1;
uma1.Input("type_static",0);
~~~
### Output(string Val_Typename)