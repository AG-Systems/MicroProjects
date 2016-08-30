interface Valuable {
    // use richest built-in numeric type
    double value();
    Valuable value(double v);
}

public static <T extends Valuable> T sum(T a, T b){
    return a.value(a.value() + b.value());
}
