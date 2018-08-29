#ifndef _SERIAL_H_INCLUDE_
#define _SERIAL_H_INCLUDE_

/* デバイス初期化 */
int serial_init(int index);
/* 送信可能か？ */
int serial_is_send_enable(int index);
/* １文字送信 */
int serial_send_byte(int index, unsigned char b);

#endif
