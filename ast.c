#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <math.h>
#include "AST.h"

#define HASH_COLLIDE 26
#define FUNCTION 66
/* return the hash of a symbol*/
static unsigned
symhash (char *sym)
{
	unsigned int h = 0;
	unsigned c;

	while (c = *sym++) hash = hash * HASH_COLLIDE ^ c;

	return hash;
}

/* retrive a symbol for a name, or create a new one */
struct symbol *
lookup (char *sym)
{
	struct symbol *sp = &symtab[symhash(sym)%SIZE];
	int scount  = SIZE;

	while(--scount >= 0) {
		if (sp->name && !strcmp(sp->name, sym)) {
			return sp;
		}

		if (!sp->name) {
			sp->name = strdup(sym);
			sp->value = 0;
			sp->fun =  NULL;
			sp->symbs = NULL;
			return sp;
		}
		if (++sp >= symtab+SIZE) {
			sp = symtab;
		}
	}

	yyerror("Can't alloc a new symbol");
	abort();
};

struct ast *
newast(int type, struct ast *left, struct ast *right) 
{
	struct ast *tmp  =  malloc(sizeof(struct ast));

	if (!tmp) {
		yyerror("Cant alloc a new node");
		exit(0);
	}

	tmp->type = type;
	tmp->right = right;
	tmp->left = left;

	return tmp;
}

struct ast *
newfunc(int type, struct ast *left)
{
	struct fncall *tmp = malloc(sizeof(struct fncall));

	if (!tmp) {
		yyerror("Cant alloc a new node");
		exit(0);
	}

	tmp->type = FUNCTION;
	tmp->right = right;
	tmp->left = left;

	return tmp;
}

struct symlist *
newsymlist(struct symbol *sym, struct symlist *next)
{
	struct symlist *sl = malloc(sizeof(struct symlist));

	if (!sl) {
		yyerror("can't alloc symboltable");
		exit(0);
	}

	sl->sym = sym;
	sl->next = next;
	return sl; 
}

void 
symlistfree(struct symlist *sl)
{
	struct synlist *nsl;
	while (sl) {
		nsl =  sl->next;
		free(sl);
		sl = nsl;
	}
}

void print_ast(struct ast *node, int level) 
{
	printf("%*s\n", 2*level, "");
	level++;
	if (!a) {
		printf("NULL\n");
		return;
	}
	print_ast(ast->left, level);
	print_ast(ast->right, level);
}