/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Ghost/Desktop/Procesador/suma2.v";
static unsigned int ng1[] = {4U, 0U, 0U, 0U};



static void Cont_25_0(char *t0)
{
    char t4[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 2368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    xsi_vlog_unsigned_add(t4, 64, t3, 64, t2, 64);
    t5 = (t0 + 2768);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t4, 0, 64);
    xsi_driver_vfirst_trans(t5, 0, 63);
    t10 = (t0 + 2688);
    *((int *)t10) = 1;

LAB1:    return;
}


extern void work_m_00000000003122763784_3729594068_init()
{
	static char *pe[] = {(void *)Cont_25_0};
	xsi_register_didat("work_m_00000000003122763784_3729594068", "isim/TB_proc_isim_beh.exe.sim/work/m_00000000003122763784_3729594068.didat");
	xsi_register_executes(pe);
}
