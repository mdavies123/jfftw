package jfftw.examples;

import jfftw.*;

class MixedComplexity {

    public static void main(String[] args) {
        int N = 1024;

        Real ri = new Real(N);
        Complex co = new Complex(N);
        Plan r2c = new Plan(ri, co, Plan.Sign.POSITIVE, 0, N);
        r2c.execute(ri, co);

        Complex ci = new Complex(N);
        Real ro = new Real(N);
        Plan c2r = new Plan(ci, ro, Plan.Sign.POSITIVE, 0, N);
        c2r.execute();
    }

}