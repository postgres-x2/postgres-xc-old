/*
 * rmgr.h
 *
 * Resource managers definition
 *
 * src/include/access/rmgr.h
 */
#ifndef RMGR_H
#define RMGR_H

typedef uint8 RmgrId;

/*
 * Built-in resource managers
 *
 * The actual numerical values for each rmgr ID are defined by the order
 * of entries in rmgrlist.h.
 *
 * Note: RM_MAX_ID must fit in RmgrId; widening that type will affect the XLOG
 * file format.
 */
<<<<<<< HEAD
#define RM_XLOG_ID				0
#define RM_XACT_ID				1
#define RM_SMGR_ID				2
#define RM_CLOG_ID				3
#define RM_DBASE_ID				4
#define RM_TBLSPC_ID			5
#define RM_MULTIXACT_ID			6
#define RM_RELMAP_ID			7
#define RM_STANDBY_ID			8
#define RM_HEAP2_ID				9
#define RM_HEAP_ID				10
#define RM_BTREE_ID				11
#define RM_HASH_ID				12
#define RM_GIN_ID				13
#define RM_GIST_ID				14
#define RM_SEQ_ID				15
#define RM_SPGIST_ID			16
#ifdef PGXC
#define RM_BARRIER_ID			17
#define RM_MAX_ID				RM_BARRIER_ID
#else
#define RM_MAX_ID				RM_SPGIST_ID
#endif
=======
#define PG_RMGR(symname,name,redo,desc,startup,cleanup,restartpoint) \
	symname,

typedef enum RmgrIds
{
#include "access/rmgrlist.h"
	RM_NEXT_ID
}	RmgrIds;

#undef PG_RMGR

#define RM_MAX_ID				(RM_NEXT_ID - 1)
>>>>>>> e472b921406407794bab911c64655b8b82375196

#endif   /* RMGR_H */
