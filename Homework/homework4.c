/// this homework was done with Francisco Sanchez's help.
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<string>
#include<stack>

using namespace std;


stack<char> op;
stack<int> res;

char line[1001];

/// Convert from char to integer number
int convert(int a, int b) {

    int n = 0;

    for(int i=a; i<b; i++) {
        n *= 10;
        n += line[i] - '0';
    }

    return n;

}


bool isop(char c) {
    return c=='+' || c=='-' || c=='*' || c=='/' || c=='^' || c=='%';
}

/// Operator precedence
int prec(char s) {
    if(s=='^')
        return 3;
    if(s=='*' || s=='/' || s=='%')
        return 2;
    if(s=='+' || s=='-')
        return 1;
    return 0;
}

int sq(int x) {
    return x*x;
}

int pot(int b, int e) {
    if(e==0)
        return 1;
    if(e==1)
        return b;
    if(e%2==0)
        return sq(pot(b, e/2));
    return b * pot(b, e-1);
}

void solve(char o) {

    /// We take two values and we save the result depending on the operator
    int b, a;

    b = res.top();
    res.pop();

    a = res.top();
    res.pop();

    if(o == '+')
        res.push(a + b);
    else if(o == '-')
        res.push(a - b);
    else if(o == '*')
        res.push(a * b);
    else if(o == '/') {
       /// some siri inspiration 
	    if(b == 0) {
            printf("Error. Imagine that you have 0 cookies and you split them evenly among 0 friends. How many cookies does each person get? See? It doesn’t make sense. And Cookie Monster is sad that there are no cookies, and you are sad that you have no friends.\n");
            exit(0);
        }
        res.push(a / b);
    } else if(o == '^')
        res.push(pot(a, b));
    else if(o == '%') {
        if(b == 0) {
            printf("Error. Indefinite module\n");
            exit(0);
        }
        res.push(a % b);
    }

    /// We take off the operator.
    op.pop();

}

void decode() {

    int len = strlen(line);

    /// We add the parenthesis at the end 
    line[len++] = ')';
    line[len] = '\0';

    /// We save the ( in the op 
    op.push('(');

    /// We see the case by separate 
    for(int i=0; i<len; i++)
        if(line[i] == ' ')
            continue;
        else if(line[i]=='(')
            op.push('(');
        else if(line[i]==')') {

            while(1) {
                if(op.top()=='(') {
                    op.pop();
                    break;
                }
                solve(op.top());
            }

        } else if(isdigit(line[i])) {

            /// We put a number

            int j=i+1;

            for(; j<len; j++)
                if(!isdigit(line[j]))
                    break;

            res.push(convert(i, j));

            i = j-1;

        } else if(isop(line[i])) {

            /// Insert an operator 

            while(prec(op.top()) >= prec(line[i]))
                solve(op.top());

            op.push(line[i]);

        }

    /// Show the result
    printf("%d\n", res.top());

    res.pop();

}

int main() {

    /// Read the expresion
    gets(line);

    /// decode and give the result
    decode();

    return 0;

}
