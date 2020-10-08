/*******************************************************************************
 * Copyright (C) 2020 Maxim Integrated Products, Inc., All rights Reserved.
 *
 * This software is protected by copyright laws of the United States and
 * of foreign countries. This material may also be protected by patent laws
 * and technology transfer regulations of the United States and of foreign
 * countries. This software is furnished under a license agreement and/or a
 * nondisclosure agreement and may only be used or reproduced in accordance
 * with the terms of those agreements. Dissemination of this information to
 * any party or parties not specified in the license agreement and/or
 * nondisclosure agreement is expressly prohibited.
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL MAXIM INTEGRATED BE LIABLE FOR ANY CLAIM, DAMAGES
 * OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
 * Except as contained in this notice, the name of Maxim Integrated
 * Products, Inc. shall not be used except as stated in the Maxim Integrated
 * Products, Inc. Branding Policy.
 *
 * The mere transfer of this software does not imply any licenses
 * of trade secrets, proprietary technology, copyrights, patents,
 * trademarks, maskwork rights, or any other form of intellectual
 * property whatsoever. Maxim Integrated Products, Inc. retains all
 * ownership rights.
 *******************************************************************************
 */
#ifndef MAXCAM_DEBUG_H_
#define MAXCAM_DEBUG_H_

#include <stdio.h>
#include <string.h>
#include "mxc_device.h"

#define PR_VERBOSE(fmt, args...)    if(0) printf("E[%-10s:%4d] " fmt "\r\n", S_MODULE_NAME, __LINE__, ##args )  ///< TODO
#define PR_DEBUG(fmt, args...)  if(0) printf("D[%-10s:%4d] " fmt "\r\n", S_MODULE_NAME, __LINE__, ##args )  ///< TODO
#define PR_INFO(fmt, args...)   if(1) printf("I[%-10s:%4d] " fmt "\r\n", S_MODULE_NAME, __LINE__, ##args )  ///< TODO
#define PR_WARN(fmt, args...)   if(1) printf("W[%-10s:%4d] " fmt "\r\n", S_MODULE_NAME, __LINE__, ##args )  ///< TODO
#define PR_ERROR(fmt, args...)    if(1) printf("E[%-10s:%4d] " fmt "\r\n", S_MODULE_NAME, __LINE__, ##args )  ///< TODO
#define PR_TIMER(fmt, args...)    if(timer_counter%10==0) printf("T[%-10s:%4d] " fmt "\r\n", S_MODULE_NAME, __LINE__, ##args )  ///< TODO


#endif /* MAXCAM_DEBUG_H_ */