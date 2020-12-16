class mulgen<T, V> 
{
T ob1;
V ob2;

mulgen(T o1, V o2) 
{
ob1 = o1;
ob2 = o2;
}

void show() {
System.out.println("Type of T is " +ob2.getClass().getName());
System.out.println("Type of V is " +ob1.getClass().getName());
}
T getob1() {
return ob1;
}
V getob2() {
return ob2;
}
}

class LAB7 {
public static void main(String args[]) {

mulgen<Integer, String> tgObj =new mulgen<Integer, String>(10, "Avirath");


tgObj.show();

String str = tgObj.getob2();
System.out.println("value: " + str);
int v = tgObj.getob1();
System.out.println("value: " + v);

System.out.println("       ");

mulgen<Integer, String> Obj =new mulgen<Integer, String>(101, "ok");

Obj.show();

str = Obj.getob2();
System.out.println("value: " + str);
v = Obj.getob1();
System.out.println("value: " + v);
}
}