/*
 * defines for low level memory management routines
 *
 * Copyright 1991 by the Antaire Corporation
 *
 * @(#)chunk.h	3.6 GRAY@ANTAIRE.COM 12/23/91
 */

#define CHUNK_CHECK_LEVEL	0	/* check depending on level only */
#define CHUNK_CHECK_ALL		1	/* check absolutely everything */

/*<<<<<<<<<<*/
/* Do NOT erase this or the above <<<<<<<<<< line. make fillproto used them. */
/* The below prototypes are automatically generated by make fillproto */

#if !defined(CHUNK_MAIN)

/* global debug level number */
IMPORT	int		_malloc_debug_level;

IMPORT	int		_malloc_errno;  /* error number */

IMPORT	int		_calloc_count;  /* # callocs, done in alloc */

/*
 * Internal message writter
 * NOTE: this is here so the users will not see it in alloc.h
 */
IMPORT	void	_malloc_message(/* format, va_alist */);
/* char		*format; */
/* va_dcl */

/* malloc version of perror of an error in STR */
IMPORT	void	_malloc_perror(/* str */);
/* char		*str; */

/* startup the low level malloc routines */
IMPORT	int	_chunk_startup(/* VOID */);

/* run extensive tests on the entire heap depending on TYPE */
IMPORT	int	_chunk_heap_check(/* type */);
/* int		type; */		/* check all or use only level */

/* run extensive tests on PNT */
IMPORT	int	_chunk_pnt_check(/* pnt */);
/* char		*pnt; */

/* return some information associated with PNT, ERROR on error */
IMPORT	int	chunk_read_info(/* pnt, size, file, line */);
/* char		*pnt; */
/* unsigned int	*size; */
/* char		**file; */
/* unsigned int	*line; */

/* get a SIZE chunk of memory for FILE at LINE */
IMPORT	char	*_chunk_malloc(/* file, line, size */);
/* char		*file; */
/* unsigned int	line; */
/* unsigned int	size; */

/* frees PNT from the heap, returns FREE_ERROR or FREE_NOERROR */
IMPORT	int	_chunk_free(/* file, line, pnt */);
/* char		*file; */
/* unsigned int	line; */
/* char		*pnt; */

/* reallocate a section of memory */
IMPORT	char	*_chunk_realloc(/* file, line, oldp, new_size */);
/* char		*file; */
/* unsigned int	line; */
/* char		*oldp; */
/* unsigned int	new_size; */

/* log present free and used lists */
IMPORT	void	_chunk_count(/* VOID */);

/* log statistics on the heap */
IMPORT	void	_chunk_stats(/* VOID */);

/* dump the unfreed memory, logs the unfreed information to logger */
IMPORT	void	_chunk_dump_not_freed(/* VOID */);

/* log an entry for the heap structure */
IMPORT	void	_chunk_log_heap_map(/* VOID */);

#endif
