/*
 * testing both function
 * declaration and 
 * definition
 *
 * ~ASA
 */

/* 
 * attempting to break 
 * parameters
 */
void Void(void);
void* VoidStar(void);

void Void(void* a);		/* conflicting types Void */


int var_arg(void* v);
int var_arg(void* v, ...);	/* conflicting types var_arg */
int var_arg(void** v);		/* conflicting types var_arg */
int** var_arg(void* v);		/* conflicting types var_arg */

/* definitions */
void all_the_vars(int a, char* b, void** c, ...){
	
	/* nest the crap out of this function */
	{
		int a,b,c,d,e;
		void a;		/* redeclaration of a */
		{
			void b[4];	/* b has type void */
			{
				int** e[5];
				{{{{{{{{{{{{}}}}}}}}}}}}
			}
		}
	}

}

void all_the_vars(int a, char* b, void** c, ...) { } /* redefinition of all_the_vars  */

void foo(void x);	/* x has type void */	

int decl_same_scope(int a, char* a, ...);	/* redeclaration of a */
