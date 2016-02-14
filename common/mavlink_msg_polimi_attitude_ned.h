// MESSAGE POLIMI_ATTITUDE_NED PACKING

#define MAVLINK_MSG_ID_POLIMI_ATTITUDE_NED 240

typedef struct __mavlink_polimi_attitude_ned_t
{
 uint64_t time_usec; /*< Timestamp (micros since boot or Unix epoch)*/
 float x; /*< x*/
 float y; /*< y*/
 float z; /*< z*/
 float w; /*< w*/
} mavlink_polimi_attitude_ned_t;

#define MAVLINK_MSG_ID_POLIMI_ATTITUDE_NED_LEN 24
#define MAVLINK_MSG_ID_240_LEN 24

#define MAVLINK_MSG_ID_POLIMI_ATTITUDE_NED_CRC 224
#define MAVLINK_MSG_ID_240_CRC 224



#define MAVLINK_MESSAGE_INFO_POLIMI_ATTITUDE_NED { \
	"POLIMI_ATTITUDE_NED", \
	5, \
	{  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_polimi_attitude_ned_t, time_usec) }, \
         { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_polimi_attitude_ned_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_polimi_attitude_ned_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_polimi_attitude_ned_t, z) }, \
         { "w", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_polimi_attitude_ned_t, w) }, \
         } \
}


/**
 * @brief Pack a polimi_attitude_ned message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec Timestamp (micros since boot or Unix epoch)
 * @param x x
 * @param y y
 * @param z z
 * @param w w
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_polimi_attitude_ned_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint64_t time_usec, float x, float y, float z, float w)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_POLIMI_ATTITUDE_NED_LEN];
	_mav_put_uint64_t(buf, 0, time_usec);
	_mav_put_float(buf, 8, x);
	_mav_put_float(buf, 12, y);
	_mav_put_float(buf, 16, z);
	_mav_put_float(buf, 20, w);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_POLIMI_ATTITUDE_NED_LEN);
#else
	mavlink_polimi_attitude_ned_t packet;
	packet.time_usec = time_usec;
	packet.x = x;
	packet.y = y;
	packet.z = z;
	packet.w = w;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_POLIMI_ATTITUDE_NED_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_POLIMI_ATTITUDE_NED;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_POLIMI_ATTITUDE_NED_LEN, MAVLINK_MSG_ID_POLIMI_ATTITUDE_NED_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_POLIMI_ATTITUDE_NED_LEN);
#endif
}

/**
 * @brief Pack a polimi_attitude_ned message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec Timestamp (micros since boot or Unix epoch)
 * @param x x
 * @param y y
 * @param z z
 * @param w w
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_polimi_attitude_ned_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint64_t time_usec,float x,float y,float z,float w)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_POLIMI_ATTITUDE_NED_LEN];
	_mav_put_uint64_t(buf, 0, time_usec);
	_mav_put_float(buf, 8, x);
	_mav_put_float(buf, 12, y);
	_mav_put_float(buf, 16, z);
	_mav_put_float(buf, 20, w);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_POLIMI_ATTITUDE_NED_LEN);
#else
	mavlink_polimi_attitude_ned_t packet;
	packet.time_usec = time_usec;
	packet.x = x;
	packet.y = y;
	packet.z = z;
	packet.w = w;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_POLIMI_ATTITUDE_NED_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_POLIMI_ATTITUDE_NED;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_POLIMI_ATTITUDE_NED_LEN, MAVLINK_MSG_ID_POLIMI_ATTITUDE_NED_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_POLIMI_ATTITUDE_NED_LEN);
#endif
}

/**
 * @brief Encode a polimi_attitude_ned struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param polimi_attitude_ned C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_polimi_attitude_ned_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_polimi_attitude_ned_t* polimi_attitude_ned)
{
	return mavlink_msg_polimi_attitude_ned_pack(system_id, component_id, msg, polimi_attitude_ned->time_usec, polimi_attitude_ned->x, polimi_attitude_ned->y, polimi_attitude_ned->z, polimi_attitude_ned->w);
}

/**
 * @brief Encode a polimi_attitude_ned struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param polimi_attitude_ned C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_polimi_attitude_ned_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_polimi_attitude_ned_t* polimi_attitude_ned)
{
	return mavlink_msg_polimi_attitude_ned_pack_chan(system_id, component_id, chan, msg, polimi_attitude_ned->time_usec, polimi_attitude_ned->x, polimi_attitude_ned->y, polimi_attitude_ned->z, polimi_attitude_ned->w);
}

/**
 * @brief Send a polimi_attitude_ned message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec Timestamp (micros since boot or Unix epoch)
 * @param x x
 * @param y y
 * @param z z
 * @param w w
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_polimi_attitude_ned_send(mavlink_channel_t chan, uint64_t time_usec, float x, float y, float z, float w)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_POLIMI_ATTITUDE_NED_LEN];
	_mav_put_uint64_t(buf, 0, time_usec);
	_mav_put_float(buf, 8, x);
	_mav_put_float(buf, 12, y);
	_mav_put_float(buf, 16, z);
	_mav_put_float(buf, 20, w);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POLIMI_ATTITUDE_NED, buf, MAVLINK_MSG_ID_POLIMI_ATTITUDE_NED_LEN, MAVLINK_MSG_ID_POLIMI_ATTITUDE_NED_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POLIMI_ATTITUDE_NED, buf, MAVLINK_MSG_ID_POLIMI_ATTITUDE_NED_LEN);
#endif
#else
	mavlink_polimi_attitude_ned_t packet;
	packet.time_usec = time_usec;
	packet.x = x;
	packet.y = y;
	packet.z = z;
	packet.w = w;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POLIMI_ATTITUDE_NED, (const char *)&packet, MAVLINK_MSG_ID_POLIMI_ATTITUDE_NED_LEN, MAVLINK_MSG_ID_POLIMI_ATTITUDE_NED_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POLIMI_ATTITUDE_NED, (const char *)&packet, MAVLINK_MSG_ID_POLIMI_ATTITUDE_NED_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_POLIMI_ATTITUDE_NED_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_polimi_attitude_ned_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, float x, float y, float z, float w)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint64_t(buf, 0, time_usec);
	_mav_put_float(buf, 8, x);
	_mav_put_float(buf, 12, y);
	_mav_put_float(buf, 16, z);
	_mav_put_float(buf, 20, w);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POLIMI_ATTITUDE_NED, buf, MAVLINK_MSG_ID_POLIMI_ATTITUDE_NED_LEN, MAVLINK_MSG_ID_POLIMI_ATTITUDE_NED_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POLIMI_ATTITUDE_NED, buf, MAVLINK_MSG_ID_POLIMI_ATTITUDE_NED_LEN);
#endif
#else
	mavlink_polimi_attitude_ned_t *packet = (mavlink_polimi_attitude_ned_t *)msgbuf;
	packet->time_usec = time_usec;
	packet->x = x;
	packet->y = y;
	packet->z = z;
	packet->w = w;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POLIMI_ATTITUDE_NED, (const char *)packet, MAVLINK_MSG_ID_POLIMI_ATTITUDE_NED_LEN, MAVLINK_MSG_ID_POLIMI_ATTITUDE_NED_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POLIMI_ATTITUDE_NED, (const char *)packet, MAVLINK_MSG_ID_POLIMI_ATTITUDE_NED_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE POLIMI_ATTITUDE_NED UNPACKING


/**
 * @brief Get field time_usec from polimi_attitude_ned message
 *
 * @return Timestamp (micros since boot or Unix epoch)
 */
static inline uint64_t mavlink_msg_polimi_attitude_ned_get_time_usec(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field x from polimi_attitude_ned message
 *
 * @return x
 */
static inline float mavlink_msg_polimi_attitude_ned_get_x(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field y from polimi_attitude_ned message
 *
 * @return y
 */
static inline float mavlink_msg_polimi_attitude_ned_get_y(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field z from polimi_attitude_ned message
 *
 * @return z
 */
static inline float mavlink_msg_polimi_attitude_ned_get_z(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field w from polimi_attitude_ned message
 *
 * @return w
 */
static inline float mavlink_msg_polimi_attitude_ned_get_w(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Decode a polimi_attitude_ned message into a struct
 *
 * @param msg The message to decode
 * @param polimi_attitude_ned C-struct to decode the message contents into
 */
static inline void mavlink_msg_polimi_attitude_ned_decode(const mavlink_message_t* msg, mavlink_polimi_attitude_ned_t* polimi_attitude_ned)
{
#if MAVLINK_NEED_BYTE_SWAP
	polimi_attitude_ned->time_usec = mavlink_msg_polimi_attitude_ned_get_time_usec(msg);
	polimi_attitude_ned->x = mavlink_msg_polimi_attitude_ned_get_x(msg);
	polimi_attitude_ned->y = mavlink_msg_polimi_attitude_ned_get_y(msg);
	polimi_attitude_ned->z = mavlink_msg_polimi_attitude_ned_get_z(msg);
	polimi_attitude_ned->w = mavlink_msg_polimi_attitude_ned_get_w(msg);
#else
	memcpy(polimi_attitude_ned, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_POLIMI_ATTITUDE_NED_LEN);
#endif
}
