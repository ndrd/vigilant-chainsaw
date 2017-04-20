<<<<<<< HEAD
/* AST tree node */
struct ast {
  int type;
  struct ast *left;
  struct ast *right;
}

/* symbol table */
struct symbol {
  char *name;
  double value;
  struct ast *fun;
  struct symlist *symbs;
}

/* symbol table */
#define SIZE 9999
struct symbol symbtab[NHASH];

struct symbol *lookup(char*);

struct symlist {
  struct symbol sym;
  struct symlist next;
}

struct symlist *newsymlist(struct symbol *sym, struct symlist *next);
void symlistfree(struct symlist *sl);

struct fncall {
  int type;
  struct ast *left; /* arguments */
  struct symbol *s; /* function name */
}

/* build a node  */
struct ast *newast(int type, struct ast *left, struct ast *right);
struct ast *newfunc(int functype, struct ast *left);

void print_ast(struct ast *a, int level);
