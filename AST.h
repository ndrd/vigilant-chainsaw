/* AST tree node */
struct ast {
  int type;
  struct ast *left;
  struct ast *right;
};

/* symbol table */
struct symbol {
  char *name;
  double value;
  struct ast *fun;
  struct symlist *symbs;
};

/* symbol table */
#define SIZE 9999
struct symbol symbtab[SIZE];

struct symbol *lookup(char*);

struct symlist {
  struct symbol *sym;
  struct symlist *next;
};

struct symlist *newsymlist(struct symbol *sym, struct symlist *next);
void symlistfree(struct symlist *sl);

struct fncall {
  int type;
  struct ast *left; /* arguments */
  struct symbol *s; /* function name */
};

/* build a node  */
struct ast *newast(int type, struct ast *left, struct ast *right);
struct ast *newfunc(int functype, struct ast *left);
struct ast *newcmp(int cmptype, struct ast *l, struct ast *r);
struct ast *newcall(struct symbol *s, struct ast *l);
struct ast *newref(struct symbol *s);
struct ast *newasgn(struct symbol *s, struct ast *v);
struct ast *newnum(double d);
struct ast *newflow(int nodetype, struct ast *cond, struct ast *tl, struct ast *tr);

void print_ast(struct ast *a, int level);
void printff( char * a);
