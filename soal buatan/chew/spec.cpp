#include <tcframe/spec.hpp>
using namespace tcframe;
using namespace std;

typedef long long LL;
const LL MAXN = 1e15;
const int MAXK = 1e3;
const int MAXQ = 1e5;

class ProblemSpec : public BaseProblemSpec{
    protected:
        int q, k;
        LL n;
        vector<LL> x, y;
        vector<LL> ans;

        void InputFormat(){
            LINE(n, k, q);
            LINES(x, y) % SIZE(q);
        }

        void OutputFormat(){
            LINES(ans) % SIZE(q);
        }

        void GradingConfig(){
            TimeLimit(1);
            MemoryLimit(64);
        }

        void Constraints(){
            CONS(1 <= n && n <= MAXN);
            CONS(1 <= k && k <= MAXK);
            CONS(1 <= q && q <= MAXQ);
            CONS(eachElementBetween(x, 1, n));
            CONS(eachElementBetween(y, 1, n));
            CONS(eachElementDifferent(x, y));
        }
    private:
        bool eachElementBetween(const vector<LL> &a, LL lo, LL hi){
            for (int i = 0; i < a.size(); i++){
                if (a[i] < lo || a[i] > hi) return false;
            }
            return true;
        }

        bool eachElementDifferent(const vector<LL> &a, const vector<LL> &b){
            if (a.size() != b.size()) return false;
            for (int i = 0; i < a.size(); i++){
                if (a[i] == b[i]) return false;
            }
            return true;
        }
};

class TestSpec : public BaseTestSpec <ProblemSpec>{
    protected: 
        void TestCases(){
            // for (int i = 0; i < 3; i++){
            //     CASE(n = rnd.nextLongLong(1, 20),
            //          k = rnd.nextInt(1, MAXK),
            //          q = rnd.nextInt(1, MAXQ),
            //          randomElementArray(x, y, 1, n, q));
            // }
            // CASE(n = rnd.nextLongLong(1, 20),
            //      k = 1,
            //      q = rnd.nextInt(1, MAXQ),
            //      randomElementArray(x, y, 1, n, q));


            // for (int i = 0; i < 3; i++){
            //     CASE(n = rnd.nextLongLong(1, 1000),
            //          k = rnd.nextInt(1, MAXK),
            //          q = rnd.nextInt(1, MAXQ),
            //          randomElementArray(x, y, 1, n, q));
            // }
            // CASE(n = rnd.nextLongLong(1, 1000),
            //      k = 1,
            //      q = rnd.nextInt(1, MAXQ),
            //      randomElementArray(x, y, 1, n, q));
            
            // for (int i = 0; i < 3; i++){
            //     CASE(n = rnd.nextLongLong(1, 1000),
            //          k = rnd.nextInt(n, 1000),
            //          q = rnd.nextInt(1, MAXQ),
            //          randomElementArray(x, y, 1, n, q));
            // }


            // for (int i = 0; i < 3; i++){
            //     CASE(n = rnd.nextLongLong(1, 100000),
            //          k = rnd.nextInt(1, MAXK),
            //          q = rnd.nextInt(1, MAXQ),
            //          randomElementArray(x, y, 1, n, q));
            // }

            //  CASE(n = rnd.nextLongLong(1, 100000),
            //      k = 1,
            //      q = rnd.nextInt(1, MAXQ),
            //      randomElementArray(x, y, 1, n, q));   

            // for (int i = 0; i < 5; i++){
            //     CASE(n = rnd.nextLongLong(1, MAXN),
            //          k = rnd.nextInt(1, MAXK),
            //          q = rnd.nextInt(1, MAXQ),
            //          randomElementArray(x, y, 1, n, q));
            // }
    
            // for (int i = 0; i < 3; i++){
            //     CASE(n = rnd.nextLongLong(1, MAXN),
            //         k = 1,
            //         q = rnd.nextInt(1, MAXQ),
            //         randomElementArray(x, y, 1, n, q)); 
            // }

            for (int i = 0; i < 3; i++){
                CASE(n =MAXN,
                    k = MAXK,
                    q = MAXQ,
                    randomElementArray(x, y, 1, n, q));
            }
            //2 -> 4, 3->7, 4->4, 5->8
            //5 -> 58 4->24 3->14 2->4
        }
    private: 
        void BeforeTestCases(){
            x.clear();
            y.clear();
        }
        void randomElementArray(vector<LL> &x, vector<LL> &y, LL lo, LL hi, int sz){
            x.clear(); y.clear();
            for (int i = 0; i < sz; i++){
                LL tx, ty;
                do{
                    tx = rnd.nextLongLong(lo, hi);
                    ty = rnd.nextLongLong(lo, hi);
                }while (tx == ty);
                x.push_back(tx);
                y.push_back(ty);
            }
        }
};  