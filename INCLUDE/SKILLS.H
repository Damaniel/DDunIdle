/* Copyright 2022 Shaun Brandt

   Permission is hereby granted, free of charge, to any person obtaining a
   copy of this software and associated documentation files (the "Software"),
   to deal in the Software without restriction, including without limitation
   the rights to use, copy, modify, merge, publish, distribute, sublicense,
   and/or sell copies of the Software, and to permit persons to whom the
   Software is furnished to do so, subject to the following conditions:

   The above copyright notice and this permission notice shall be included
   in all copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
   FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
   DEALINGS IN THE SOFTWARE.
 */
#ifndef __SKILLS_H__
#define __SKILLS_H__

#include "DDUNIDLE.H"

/* process_proc
 *
 * Processes a single mastery action.  This also affects the skill in that
 * mastery actions give the skill experience. 
 * */
void process_proc(Skill *s);

/* get_active_mastery 
 *
 * a helper function that returns the active mastery for the selected skill.
 */
Mastery *get_active_mastery(Skill *s);

/* get_active_skill
 *
 * a helper function that returns the active skill.
 */
Skill *get_active_skill(void);

/* set_next_proc
 *
 * Determine when the mastery should trigger again and sets it.
 */
void set_next_proc(Mastery *m);

/* debug_skill 
 *
 * Prints out information about the provided skill 
 */
void debug_skill(Skill *s);

/* get_skill_name
 * 
 * Returns a string that contains the name of the specified skill 
 */
char *get_skill_name(Skill *s);

/* get_mastery_name 
 *
 * Returns a string that contains the name of the specified mastery
 */
char *get_mastery_name(Mastery *m);

void set_active_mastery(Skill *s, int mastery_id);
void activate_skill(Skill *s);
void deactivate_skill(Skill *s);

float get_action_progress(unsigned int execution_time, unsigned int timer, unsigned int proc);
float get_mastery_progress(unsigned int cur_exp, unsigned int mastery_level);
float get_skill_progress(unsigned int cur_exp, unsigned int skill_level);

/* The global skill and mastery lists */
extern int g_num_skills;
extern int g_num_masteries;

/* The ID of the currently active skill */
extern int g_active_skill;

extern float g_action_progress;
extern float g_mastery_progress;
extern float g_skill_progress;

#endif
