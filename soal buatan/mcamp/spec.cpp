#include <tcframe/spec.hpp>
using namespace tcframe;
using namespace std;

typedef long long LL;

const int MAXN = 1e5;
const int MAXX = 1e9;

class ProblemSpec : public BaseProblemSpec{
    protected: 
        int n;
        LL ans;
        vector<LL> x, g, d;

        void InputFormat(){
            LINE(n);
            LINES(x, g, d) % SIZE(n);
        }

        void OutputFormat(){
            LINE(ans);
        }

        void GradingConfig(){
            TimeLimit(2);
            MemoryLimit(64);
        }

        void Constraints(){
            CONS(1 <= n && n <= MAXN);
            CONS(eachElementBetween(x, 0, MAXX));
            CONS(eachElementBetween(g, 0, MAXX));
            CONS(eachElementBetween(d, 0, MAXX));
            CONS(isValid(x));
        }

    private: 
        bool eachElementBetween(const vector<LL> & a, LL lo, LL hi){
            for (int i = 0; i < a.size(); i++){
                if (a[i] < lo || a[i] > hi) return false;
            }
            return true;
        }

        bool isValid(const vector<LL> &a){
            for (int i = 0; i < (int)a.size(); i++){
                if (i == 0) continue;
                if (a[i] <= a[i-1]) return false;
            }
            return true;
        }
};  

class TestSpec : public BaseTestSpec<ProblemSpec>{
    protected: 
        void TestCases(){
            for (int i = 0; i < 3; i++){
                CASE(n = rnd.nextInt(1, 20),
                    randomX(x, n),
                    randomArray(g,n),
                    randomArray(d,n));
            }

            for (int i = 0; i < 3; i++){
                CASE(n = rnd.nextInt(1, 100),
                    randomX(x, n),
                    randomArray(g,n),
                    randomArray(d,n));
            }

            for (int i = 0; i < 3; i++){
                CASE(n = rnd.nextInt(1, 5000),
                    randomX(x, n),
                    randomArray(g,n),
                    randomArray(d,n));
            }

            for (int i = 0; i < 4; i++){
                CASE(n = rnd.nextInt(1, 100000),
                    randomX(x, n),
                    randomArray(g,n),
                    randomArray(d,n));
            }
        } //10 //17.5 //22.5 

    public: 
        void BeforeTestCases(){
            x.clear();
            g.clear();
            d.clear();
        }
        void randomX(vector<LL> & a, int n){
            a.clear();
            vector<LL> b;
            b.clear();
            map<LL,bool> ada;
            for (int i =0; i < n; i++){
                LL bil;
                do{
                    bil = rnd.nextLongLong(1, MAXX);
                }while (ada.find(bil) != ada.end());
                ada[bil] = true;
                b.push_back(bil);
            }
            sort(b.begin(), b.end());
            a = b;
        }

        void randomArray(vector<LL> & a, int n){
            a.clear();
            for (int i = 0; i < n; i++){
                LL bil = rnd.nextLongLong(1, MAXX);
                a.push_back(bil);
            }
        }

};
