
down vote
I would urge you to NOT use instanceof, however this code does what you want:

public class Main
{
    public static void main(String[] args) 
    {
        final Main main;
        final String strVal;
        final Integer intVal;
        final Float   floatVal;

        main     = new Main();
        strVal   = main.doIt("Hello");
        intVal   = main.doIt(5);
        floatVal = main.doIt(5.0f);

        System.out.println(strVal);
        System.out.println(intVal);
        System.out.println(floatVal);
    }

    public <T> T doIt(final T thing)
    {
        T t;

        if(thing instanceof String)
        {
            t = (T)"String";
        }
        else if (thing instanceof Integer)
        {
            t = (T)Integer.valueOf(1);
        }
        else
        {
            t = null;
        }

        return (t);
    }
}
