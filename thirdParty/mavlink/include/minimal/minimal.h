/** @file
 *	@brief MAVLink comm protocol generated from minimal.xml
 *	@see http://qgroundcontrol.org/mavlink/
 */
#ifndef MINIMAL_H
#define MINIMAL_H

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
#endif

#ifndef MAVLINK_MESSAGE_INFO
<<<<<<< HEAD
#define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_HEARTBEAT, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}, {"EMPTY",0,{}}}
=======
#define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_HEARTBEAT, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}, {NULL}}
>>>>>>> 720cd74fe31475906a3a527f70f564b1ebc17eb5
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_MINIMAL



// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

// ENUM DEFINITIONS



// MESSAGE DEFINITIONS
#include "./mavlink_msg_heartbeat.h"

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MINIMAL_H
