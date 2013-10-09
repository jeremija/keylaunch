/*
 * Oroborus Window Manager - KeyLaunch
 *
 * Copyright (C) 2002 Stefan Pfetzing
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.  
 */

#ifndef __KEYLAUNCH_H__
#define __KEYLAUNCH_H__
void print_error(char *, int);
void init_keyboard(void);
void grab_key(int, unsigned int, Window);
void create_new_key(char *);
void free_keys(void);
void parse_rc(char *, char *);
void fork_exec(char *);
void quit(void);
void signal_handler(int);
void usage ();
void initialize(void);
int main(int, char *[]);
#endif /* __KEYLAUNCH_H_ */

/***This must remain at the end of the file.*****
 * vi:set sw=2 ts=2:                            *
 * vi:set cindent cinoptions={1s,>2s,^-1s,n-1s: *
 * vi:set foldmethod=marker:                    *
 * vi:set foldmarker=«««,»»»:                   *
 ************************************************/

