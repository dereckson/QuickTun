#ifndef crypto_box_curve25519salsa20hmacsha512_H
#define crypto_box_curve25519salsa20hmacsha512_H

#define crypto_box_curve25519salsa20hmacsha512_ref_PUBLICKEYBYTES 32
#define crypto_box_curve25519salsa20hmacsha512_ref_SECRETKEYBYTES 32
#define crypto_box_curve25519salsa20hmacsha512_ref_BEFORENMBYTES 32
#define crypto_box_curve25519salsa20hmacsha512_ref_NONCEBYTES 8
#define crypto_box_curve25519salsa20hmacsha512_ref_ZEROBYTES 32
#define crypto_box_curve25519salsa20hmacsha512_ref_BOXZEROBYTES 0
#ifdef __cplusplus
extern "C" {
#endif
extern int crypto_box_curve25519salsa20hmacsha512_ref(unsigned char *,const unsigned char *,unsigned long long,const unsigned char *,const unsigned char *,const unsigned char *);
extern int crypto_box_curve25519salsa20hmacsha512_ref_open(unsigned char *,const unsigned char *,unsigned long long,const unsigned char *,const unsigned char *,const unsigned char *);
extern int crypto_box_curve25519salsa20hmacsha512_ref_keypair(unsigned char *,unsigned char *);
extern int crypto_box_curve25519salsa20hmacsha512_ref_beforenm(unsigned char *,const unsigned char *,const unsigned char *);
extern int crypto_box_curve25519salsa20hmacsha512_ref_afternm(unsigned char *,const unsigned char *,unsigned long long,const unsigned char *,const unsigned char *);
extern int crypto_box_curve25519salsa20hmacsha512_ref_open_afternm(unsigned char *,const unsigned char *,unsigned long long,const unsigned char *,const unsigned char *);
#ifdef __cplusplus
}
#endif

#define crypto_box_curve25519salsa20hmacsha512 crypto_box_curve25519salsa20hmacsha512_ref
#define crypto_box_curve25519salsa20hmacsha512_open crypto_box_curve25519salsa20hmacsha512_ref_open
#define crypto_box_curve25519salsa20hmacsha512_keypair crypto_box_curve25519salsa20hmacsha512_ref_keypair
#define crypto_box_curve25519salsa20hmacsha512_beforenm crypto_box_curve25519salsa20hmacsha512_ref_beforenm
#define crypto_box_curve25519salsa20hmacsha512_afternm crypto_box_curve25519salsa20hmacsha512_ref_afternm
#define crypto_box_curve25519salsa20hmacsha512_open_afternm crypto_box_curve25519salsa20hmacsha512_ref_open_afternm
#define crypto_box_curve25519salsa20hmacsha512_PUBLICKEYBYTES crypto_box_curve25519salsa20hmacsha512_ref_PUBLICKEYBYTES
#define crypto_box_curve25519salsa20hmacsha512_SECRETKEYBYTES crypto_box_curve25519salsa20hmacsha512_ref_SECRETKEYBYTES
#define crypto_box_curve25519salsa20hmacsha512_BEFORENMBYTES crypto_box_curve25519salsa20hmacsha512_ref_BEFORENMBYTES
#define crypto_box_curve25519salsa20hmacsha512_NONCEBYTES crypto_box_curve25519salsa20hmacsha512_ref_NONCEBYTES
#define crypto_box_curve25519salsa20hmacsha512_ZEROBYTES crypto_box_curve25519salsa20hmacsha512_ref_ZEROBYTES
#define crypto_box_curve25519salsa20hmacsha512_BOXZEROBYTES crypto_box_curve25519salsa20hmacsha512_ref_BOXZEROBYTES
#define crypto_box_curve25519salsa20hmacsha512_IMPLEMENTATION "crypto_box/curve25519salsa20hmacsha512/ref"
#ifndef crypto_box_curve25519salsa20hmacsha512_ref_VERSION
#define crypto_box_curve25519salsa20hmacsha512_ref_VERSION "-"
#endif
#define crypto_box_curve25519salsa20hmacsha512_VERSION crypto_box_curve25519salsa20hmacsha512_ref_VERSION

#endif
