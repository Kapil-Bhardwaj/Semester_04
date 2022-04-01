package SingleInheritance;

class SingleInheritance {
    public static void main(String[] args) {

        base ob1 = new base();

        ob1.showB(); // base class object calling it's own method

        derieved ob2 = new derieved();

        ob2.showB(); // derieved class object calling it's own method

        ob2.showD(); // derieved class object calling [base] class methog method

    }

}