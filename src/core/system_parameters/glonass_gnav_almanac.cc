/*!
 * \file glonass_gnav_almanac.cc
 * \brief  Interface of a GLONASS GNAV ALMANAC storage as described in GLONASS ICD (Edition 5.1)
 * \note Code added as part of GSoC 2017 program
 * \author Damian Miralles, 2017. dmiralles2009(at)gmail.com
 * \see <a href="http://russianspacesystems.ru/wp-content/uploads/2016/08/ICD_GLONASS_eng_v5.1.pdf">GLONASS ICD</a>
 *
 * -------------------------------------------------------------------------
 *
 * Copyright (C) 2010-2019  (see AUTHORS file for a list of contributors)
 *
 * GNSS-SDR is a software defined Global Navigation
 *          Satellite Systems receiver
 *
 * This file is part of GNSS-SDR.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 * -------------------------------------------------------------------------
 */

#include "glonass_gnav_almanac.h"

Glonass_Gnav_Almanac::Glonass_Gnav_Almanac()
{
    i_satellite_freq_channel = 0;
    i_satellite_PRN = 0U;
    i_satellite_slot_number = 0U;

    d_n_A = 0.0;
    d_H_n_A = 0.0;
    d_lambda_n_A = 0.0;
    d_t_lambda_n_A = 0.0;
    d_Delta_i_n_A = 0.0;
    d_Delta_T_n_A = 0.0;
    d_Delta_T_n_A_dot = 0.0;
    d_epsilon_n_A = 0.0;
    d_omega_n_A = 0.0;
    d_M_n_A = 0.0;
    d_KP = 0.0;
    d_tau_n_A = 0.0;
    d_C_n = false;
    d_l_n = false;
}
