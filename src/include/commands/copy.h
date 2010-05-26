/*-------------------------------------------------------------------------
 *
 * copy.h
 *	  Definitions for using the POSTGRES copy command.
 *
 *
 * Portions Copyright (c) 1996-2009, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * $PostgreSQL$
 *
 *-------------------------------------------------------------------------
 */
#ifndef COPY_H
#define COPY_H

#include "nodes/parsenodes.h"
#include "tcop/dest.h"

#ifdef PGXC
extern uint64 DoCopy(const CopyStmt *stmt, const char *queryString, bool exec_on_coord_portal);
extern bool IsCoordPortalCopy(const CopyStmt *stmt);
#else
extern uint64 DoCopy(const CopyStmt *stmt, const char *queryString);
#endif

extern DestReceiver *CreateCopyDestReceiver(void);

#endif   /* COPY_H */
