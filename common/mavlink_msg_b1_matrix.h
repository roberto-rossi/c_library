// MESSAGE B1_MATRIX PACKING

#define MAVLINK_MSG_ID_B1_MATRIX 230

typedef struct __mavlink_b1_matrix_t
{
 uint64_t time_usec; /*< Timestamp (micros since boot or Unix epoch)*/
 float value[50]; /*< B*/
} mavlink_b1_matrix_t;

#define MAVLINK_MSG_ID_B1_MATRIX_LEN 208
#define MAVLINK_MSG_ID_230_LEN 208

#define MAVLINK_MSG_ID_B1_MATRIX_CRC 220
#define MAVLINK_MSG_ID_230_CRC 220

#define MAVLINK_MSG_B1_MATRIX_FIELD_VALUE_LEN 50

#define MAVLINK_MESSAGE_INFO_B1_MATRIX { \
	"B1_MATRIX", \
	2, \
	{  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_b1_matrix_t, time_usec) }, \
         { "value", NULL, MAVLINK_TYPE_FLOAT, 50, 8, offsetof(mavlink_b1_matrix_t, value) }, \
         } \
}


/**
 * @brief Pack a b1_matrix message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec Timestamp (micros since boot or Unix epoch)
 * @param value B
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_b1_matrix_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint64_t time_usec, const float *value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_B1_MATRIX_LEN];
	_mav_put_uint64_t(buf, 0, time_usec);
	_mav_put_float_array(buf, 8, value, 50);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_B1_MATRIX_LEN);
#else
	mavlink_b1_matrix_t packet;
	packet.time_usec = time_usec;
	mav_array_memcpy(packet.value, value, sizeof(float)*50);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_B1_MATRIX_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_B1_MATRIX;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_B1_MATRIX_LEN, MAVLINK_MSG_ID_B1_MATRIX_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_B1_MATRIX_LEN);
#endif
}

/**
 * @brief Pack a b1_matrix message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec Timestamp (micros since boot or Unix epoch)
 * @param value B
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_b1_matrix_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint64_t time_usec,const float *value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_B1_MATRIX_LEN];
	_mav_put_uint64_t(buf, 0, time_usec);
	_mav_put_float_array(buf, 8, value, 50);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_B1_MATRIX_LEN);
#else
	mavlink_b1_matrix_t packet;
	packet.time_usec = time_usec;
	mav_array_memcpy(packet.value, value, sizeof(float)*50);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_B1_MATRIX_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_B1_MATRIX;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_B1_MATRIX_LEN, MAVLINK_MSG_ID_B1_MATRIX_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_B1_MATRIX_LEN);
#endif
}

/**
 * @brief Encode a b1_matrix struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param b1_matrix C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_b1_matrix_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_b1_matrix_t* b1_matrix)
{
	return mavlink_msg_b1_matrix_pack(system_id, component_id, msg, b1_matrix->time_usec, b1_matrix->value);
}

/**
 * @brief Encode a b1_matrix struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param b1_matrix C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_b1_matrix_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_b1_matrix_t* b1_matrix)
{
	return mavlink_msg_b1_matrix_pack_chan(system_id, component_id, chan, msg, b1_matrix->time_usec, b1_matrix->value);
}

/**
 * @brief Send a b1_matrix message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec Timestamp (micros since boot or Unix epoch)
 * @param value B
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_b1_matrix_send(mavlink_channel_t chan, uint64_t time_usec, const float *value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_B1_MATRIX_LEN];
	_mav_put_uint64_t(buf, 0, time_usec);
	_mav_put_float_array(buf, 8, value, 50);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_B1_MATRIX, buf, MAVLINK_MSG_ID_B1_MATRIX_LEN, MAVLINK_MSG_ID_B1_MATRIX_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_B1_MATRIX, buf, MAVLINK_MSG_ID_B1_MATRIX_LEN);
#endif
#else
	mavlink_b1_matrix_t packet;
	packet.time_usec = time_usec;
	mav_array_memcpy(packet.value, value, sizeof(float)*50);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_B1_MATRIX, (const char *)&packet, MAVLINK_MSG_ID_B1_MATRIX_LEN, MAVLINK_MSG_ID_B1_MATRIX_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_B1_MATRIX, (const char *)&packet, MAVLINK_MSG_ID_B1_MATRIX_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_B1_MATRIX_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_b1_matrix_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, const float *value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint64_t(buf, 0, time_usec);
	_mav_put_float_array(buf, 8, value, 50);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_B1_MATRIX, buf, MAVLINK_MSG_ID_B1_MATRIX_LEN, MAVLINK_MSG_ID_B1_MATRIX_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_B1_MATRIX, buf, MAVLINK_MSG_ID_B1_MATRIX_LEN);
#endif
#else
	mavlink_b1_matrix_t *packet = (mavlink_b1_matrix_t *)msgbuf;
	packet->time_usec = time_usec;
	mav_array_memcpy(packet->value, value, sizeof(float)*50);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_B1_MATRIX, (const char *)packet, MAVLINK_MSG_ID_B1_MATRIX_LEN, MAVLINK_MSG_ID_B1_MATRIX_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_B1_MATRIX, (const char *)packet, MAVLINK_MSG_ID_B1_MATRIX_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE B1_MATRIX UNPACKING


/**
 * @brief Get field time_usec from b1_matrix message
 *
 * @return Timestamp (micros since boot or Unix epoch)
 */
static inline uint64_t mavlink_msg_b1_matrix_get_time_usec(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field value from b1_matrix message
 *
 * @return B
 */
static inline uint16_t mavlink_msg_b1_matrix_get_value(const mavlink_message_t* msg, float *value)
{
	return _MAV_RETURN_float_array(msg, value, 50,  8);
}

/**
 * @brief Decode a b1_matrix message into a struct
 *
 * @param msg The message to decode
 * @param b1_matrix C-struct to decode the message contents into
 */
static inline void mavlink_msg_b1_matrix_decode(const mavlink_message_t* msg, mavlink_b1_matrix_t* b1_matrix)
{
#if MAVLINK_NEED_BYTE_SWAP
	b1_matrix->time_usec = mavlink_msg_b1_matrix_get_time_usec(msg);
	mavlink_msg_b1_matrix_get_value(msg, b1_matrix->value);
#else
	memcpy(b1_matrix, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_B1_MATRIX_LEN);
#endif
}
