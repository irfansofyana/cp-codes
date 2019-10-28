#include <tcframe/spec.hpp>
using namespace tcframe;
using namespace std;

const int MAXN = 1e9;
const int MAXM = 1000;
const int MAXQ = 1000;
const int MAXX = 1e9;

typedef long long LL;

class ProblemSpec : public BaseProblemSpec{
    protected: 
        LL n, m;
        vector<LL> x;
        LL q;
        vector<LL> a;
        vector<LL> ans;

        void InputFormat(){
            LINE(n, m);
            LINE(x % SIZE(m));
            LINE(q);
            LINES(a) % SIZE(q);
        }

        void OutputFormat(){
            LINES(ans) % SIZE(q);
        }

        void GradingConfig(){
            TimeLimit(2);
            MemoryLimit(64);
        }

        void Constraints(){
            CONS(1 <= n && n <= MAXN);
            CONS(1 <= m && m <= MAXM);
            CONS(eachElementBetween(x, 1, MAXX));
            CONS(1 <= q && q <= MAXQ);
            CONS(eachElementBetween(a, 1, n));
        }

    private: 
        bool eachElementBetween(const vector<LL> &a, LL lo, LL hi){
            for (int i = 0; i < a.size(); i++){
                if (a[i] < lo || a[i] > hi) return false;
            }
            return true;
        }
};

class TestSpec : public BaseTestSpec <ProblemSpec>{
    protected: 
        void TestCases(){
            //subsoal1 4
            CASE(n = 10, m = 3,
                 x = {4, 6, 9}, q = 5, a={2, 4, 7, 9, 10});
            //subsoal 2 6
            CASE(n = 20, m = 5,
                 x = {4, 7, 8, 23, 100}, q = 7, a = {6, 9, 13, 15, 18, 19, 20});
            
            //subsoal 3 10
            for (int i = 0; i < 3; i++){
                CASE(n = rnd.nextLongLong(1, 1000),
                     m = rnd.nextLongLong(1, 200),
                     q = rnd.nextLongLong(1, 100),
                     randomArr(x, m, 1LL, MAXX),
                     randomArr(a, q, 1LL, n));
            }         

            //subsoal 4 12
            for (int i = 0; i < 3; i++){
                CASE(n = rnd.nextLongLong(1001, 100000),
                     m = rnd.nextLongLong(1, 200),
                     q = rnd.nextLongLong(101, MAXQ),
                     randomArr(x, m, 1LL, MAXX),
                     randomArr(a, q, 1LL, n));
            }   

            //subsoal 5 14
            for (int i = 0; i < 3; i++){
                 CASE(n = rnd.nextLongLong(100001, MAXN),
                     m = rnd.nextLongLong(1, 10),
                     q = rnd.nextLongLong(101, MAXQ),
                     randomArr(x, m, 1LL, 10LL),
                     randomArr(a, q, 1LL, n));
            }

            //subsoal 6 54
            for (int i = 0; i < 8; i++){
                 CASE(n = rnd.nextLongLong(100001, MAXN),
                     m = rnd.nextLongLong(201, MAXM),
                     q = rnd.nextLongLong(101, MAXQ),
                     randomArr(x, m, 1LL, MAXX),
                     randomArr(a, q, 1LL, n));
            }
        }
    private: 
        void BeforeTestCases(){
            x.clear();
            a.clear();
            ans.clear();
        }

        void randomArr(vector<LL> & a, LL sz, LL lo, LL hi){
            a.clear();
            for (LL i = 0; i < sz; i++){
                LL bil = rnd.nextLongLong(lo, hi);
                a.push_back(bil);
            }
        }
};