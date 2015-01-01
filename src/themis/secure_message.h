/**
 * @file
 *
 * (c) CossackLabs
 */

#ifndef _THEMIS_SECURE_MESSAGE_H_
#define _THEMIS_SECURE_MESSAGE_H_

#include <themis/themis.h>

themis_status_t themis_gen_rsa_key_pair(uint8_t* private_key,
					size_t* private_key_length,
					uint8_t* public_key,
					size_t* public_key_length);

themis_status_t themis_gen_ec_key_pair(uint8_t* private_key,
				       size_t* private_key_length,
				       uint8_t* public_key,
				       size_t* public_key_length);

themis_status_t themis_secure_message_wrap(const uint8_t* private_key,
					   const size_t private_key_length,
					   const uint8_t* public_key,
					   const size_t public_key_length,
					   const uint8_t* message,
					   const size_t message_length,
					   uint8_t* wrapped_message,
					   size_t* wrapped_message_length);

themis_status_t themis_secure_message_unwrap(const uint8_t* private_key,
					   const size_t private_key_length,
					   const uint8_t* public_key,
					   const size_t public_key_length,
					   const uint8_t* wrapped_message,
					   const size_t wrapped_message_length,
					   uint8_t* message,
					   size_t* message_length);

#endif /* _THEMIS_SECURE_MESSAGE_H_ */
















