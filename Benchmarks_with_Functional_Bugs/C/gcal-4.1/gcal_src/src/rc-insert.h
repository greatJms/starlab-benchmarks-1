#ifndef __RC_INSERT_H
# define __RC_INSERT_H
/*!
*  \file rc-insert.h
*  \brief Inserts a line (of a resource file)
*  			into `rc_elems_table[]' header file.
*/
/*
*  Copyright (c) 1994, 95, 96, 1997, 2000 Thomas Esken
*  Copyright (c) 2010, 2011, 2013 Free Software Foundation, Inc.
*
*  This software doesn't claim completeness, correctness or usability.
*  On principle I will not be liable for ANY damages or losses (implicit
*  or explicit), which result from using or handling my software.
*  If you use this software, you agree without any exception to this
*  agreement, which binds you LEGALLY !!
*
*  This program is free software; you can redistribute it and/or modify
*  it under the terms of the `GNU General Public License' as published by
*  the `Free Software Foundation'; either version 3, or (at your option)
*  any later version.
*
*  You should have received a copy of the `GNU General Public License'
*  along with this program; if not, write to the:
*
*/



/*
*  $Id: rc-insert.h 3.01 2000/06/14 03:00:01 tom Exp $
*/



/*
*  GLOBAL functions prototypes.
*/
__BEGIN_DECLARATIONS
/*
*  The REGEX stuff.
*/
# if HAVE_RE_COMP
extern int re_exec ();
# endif
/*
************************************************** Defined in `rc-insert.c'.
*/
extern void
  insert_line_into_table __P_ ((char *line_buffer,
				const char *filename,
				const long line_number,
				int *rc_elems,
				int len_date, int print_twice));
__END_DECLARATIONS
#endif /* __RC_INSERT_H */
