int x;
int x(void); /* conflicting types for x*/

int a(void *y){
    int stuff;
}
int a(void *y){ /* redifinition of a*/
    char otherStuff;
}

char b(int x){
    char x; /*redeclaration of x */
}

int r;
char r; /* conflicting types for r */

void main(void){

    int y;
    y = q + x;  /* q undeclared */
    return x + y; /* should be fine since x is a global earlier */
}

int o(void y){ /* y has type void */
    void *p;
    void pp; /* pp has type void */
}

int t;
int foo(void){
    char t;  /* should be fine, just overrides the global t */
}

void bar(char p){
    int *p; /* redeclaration of p */

}

int funct1(char x, char y, ...){
    int q;
}
int funct1(char y, char x, char z){ /* conflicting types for funct1 */
    int u;
}

int qq(char e){
    void e; /* redeclaration of e (not void type error because e3 is first) */
    void z; /* z has type void */
}

int _a(void){
    if(_a == 1){
        int _b;
        if(_b == 1){
            int _c;
            if (_c == 1){
                
            }
        }else{
            return c;
        }
    }
}
