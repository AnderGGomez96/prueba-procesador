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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000004055817377_1733832700_init();
    work_m_00000000003365864918_0467708899_init();
    work_m_00000000004247618755_0621066737_init();
    work_m_00000000000061919765_4206047371_init();
    work_m_00000000004191548741_0886308060_init();
    work_m_00000000003487453820_0613347043_init();
    work_m_00000000003606556596_3196902322_init();
    work_m_00000000004065369642_4066630463_init();
    work_m_00000000001260772803_4139264722_init();
    work_m_00000000003775794140_0404092926_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003775794140_0404092926");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
