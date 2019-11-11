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
static const char *ng0 = "C:/Users/Ghost/Desktop/Procesador/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {0U, 0U, 0U, 0U};
static unsigned int ng7[] = {4294967295U, 0U, 4294967295U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {6U, 0U};



static void Always_29_0(char *t0)
{
    char t10[16];
    char t16[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t17;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 3416);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(32, ng0);
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    t7 = (t0 + 1368U);
    t9 = *((char **)t7);
    xsi_vlog_signed_add(t10, 64, t8, 64, t9, 64);
    t7 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t7, t10, 0, 0, 64, 0LL);
    goto LAB21;

LAB9:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    xsi_vlog_signed_minus(t10, 64, t4, 64, t7, 64);
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t10, 0, 0, 64, 0LL);
    goto LAB21;

LAB11:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    xsi_vlog_signed_bit_and(t10, 64, t4, 64, t7, 64);
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t10, 0, 0, 64, 0LL);
    goto LAB21;

LAB13:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    xsi_vlog_signed_bit_or(t10, 64, t4, 64, t7, 64);
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t10, 0, 0, 64, 0LL);
    goto LAB21;

LAB15:    xsi_set_current_line(37, ng0);

LAB22:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng6)));
    xsi_vlog_unsigned_equal(t10, 64, t4, 64, t3, 64);
    t7 = (t10 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 64, 0LL);

LAB25:    goto LAB21;

LAB17:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    memset(t16, 0, 8);
    t3 = (t16 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 10);
    *((unsigned int *)t16) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 10);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t15 & 63U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 63U);
    xsi_vlog_signed_arith_lshift(t10, 64, t4, 64, t16, 6);
    t9 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t9, t10, 0, 0, 64, 0LL);
    goto LAB21;

LAB19:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    memset(t16, 0, 8);
    t3 = (t16 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 10);
    *((unsigned int *)t16) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 10);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t15 & 63U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 63U);
    xsi_vlog_signed_arith_rshift(t10, 64, t4, 64, t16, 6);
    t9 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t9, t10, 0, 0, 64, 0LL);
    goto LAB21;

LAB23:    xsi_set_current_line(39, ng0);
    t8 = ((char*)((ng6)));
    t9 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t9, t8, 0, 0, 64, 0LL);
    goto LAB25;

}

static void Cont_47_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[16];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;

LAB0:    t1 = (t0 + 3096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1928);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng6)));
    xsi_vlog_unsigned_equal(t8, 64, t6, 64, t7, 64);
    memset(t4, 0, 8);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t9) != 0)
        goto LAB6;

LAB7:    t16 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t16);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB8;

LAB9:    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t16);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t16) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t25, 8);

LAB16:    t26 = (t0 + 3512);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memset(t30, 0, 8);
    t31 = 1U;
    t32 = t31;
    t33 = (t3 + 4);
    t34 = *((unsigned int *)t3);
    t31 = (t31 & t34);
    t35 = *((unsigned int *)t33);
    t32 = (t32 & t35);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t37 | t31);
    t38 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t38 | t32);
    xsi_driver_vfirst_trans(t26, 0, 0);
    t39 = (t0 + 3432);
    *((int *)t39) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t15 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB7;

LAB8:    t20 = ((char*)((ng2)));
    goto LAB9;

LAB10:    t25 = ((char*)((ng1)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t20, 1, t25, 1);
    goto LAB16;

LAB14:    memcpy(t3, t20, 8);
    goto LAB16;

}


extern void work_m_00000000003494553310_0886308060_init()
{
	static char *pe[] = {(void *)Always_29_0,(void *)Cont_47_1};
	xsi_register_didat("work_m_00000000003494553310_0886308060", "isim/Procesador_TB_isim_beh.exe.sim/work/m_00000000003494553310_0886308060.didat");
	xsi_register_executes(pe);
}
