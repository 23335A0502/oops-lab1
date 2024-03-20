class A{
    void display(String a){
        System.out.println("HELLO "+a);
    }
}
class MethodOr extends  A{

    void display(String a){
        System.out.println(a+" hi ");
    }
    public static void main(String args[]){
        MethodOr obj=new MethodOr();
        obj.display("mom");
        obj.display("dad");
     
    }
}


