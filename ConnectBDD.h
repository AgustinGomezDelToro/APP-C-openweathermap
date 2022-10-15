#ifndef __CONNECT_BDD_H__
#define __CONNECT_BDD_H__

#include <mysql/mysql.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "Struct.h"

MYSQL_STMT *stmt;
MYSQL_STMT *stmtInsertJSON;
MYSQL_DATA is_null;

MYSQL *initDb();
void initPreparedStatements(MYSQL *connect, double *t, char *city, double *tmn, double *tmx, char *w, char *i);

#endif