#ifndef _CODING_H
#define _CODING_H

#include "../vgmstream.h"

void decode_adx(VGMSTREAMCHANNEL * stream, sample * outbuf, int channelspacing, int32_t first_sample, int32_t samples_to_do);

void decode_g721(VGMSTREAMCHANNEL * stream, sample * outbuf, int channelspacing, int32_t first_sample, int32_t samples_to_do);
void g72x_init_state(struct g72x_state *state_ptr);

void decode_nds_ima(VGMSTREAMCHANNEL * stream, sample * outbuf, int channelspacing, int32_t first_sample, int32_t samples_to_do);
void decode_xbox_ima(VGMSTREAMCHANNEL * stream, sample * outbuf, int channelspacing, int32_t first_sample, int32_t samples_to_do,int channel);
void decode_dvi_ima(VGMSTREAMCHANNEL * stream, sample * outbuf, int channelspacing, int32_t first_sample, int32_t samples_to_do);
void decode_ima(VGMSTREAMCHANNEL * stream, sample * outbuf, int channelspacing, int32_t first_sample, int32_t samples_to_do);

void decode_ngc_afc(VGMSTREAMCHANNEL * stream, sample * outbuf, int channelspacing, int32_t first_sample, int32_t samples_to_do);

void decode_ngc_dsp(VGMSTREAMCHANNEL * stream, sample * outbuf, int channelspacing, int32_t first_sample, int32_t samples_to_do);

int32_t dsp_nibbles_to_samples(int32_t nibbles);

void decode_ngc_dtk(VGMSTREAMCHANNEL * stream, sample * outbuf, int channelspacing, int32_t first_sample, int32_t samples_to_do, int channel);

void decode_pcm16LE(VGMSTREAMCHANNEL * stream, sample * outbuf, int channelspacing, int32_t first_sample, int32_t samples_to_do);
void decode_pcm16BE(VGMSTREAMCHANNEL * stream, sample * outbuf, int channelspacing, int32_t first_sample, int32_t samples_to_do);
void decode_pcm8(VGMSTREAMCHANNEL * stream, sample * outbuf, int channelspacing, int32_t first_sample, int32_t samples_to_do);

void decode_psx(VGMSTREAMCHANNEL * stream, sample * outbuf, int channelspacing, int32_t first_sample, int32_t samples_to_do);

void decode_invert_psx(VGMSTREAMCHANNEL * stream, sample * outbuf, int channelspacing, int32_t first_sample, int32_t samples_to_do);

void decode_xa(VGMSTREAMCHANNEL * stream, sample * outbuf, int channelspacing, int32_t first_sample, int32_t samples_to_do);

void decode_eaxa(VGMSTREAMCHANNEL * stream, sample * outbuf, int channelspacing, int32_t first_sample, int32_t samples_to_do,int channel);

#ifdef VGM_USE_VORBIS
void decode_ogg_vorbis(ogg_vorbis_codec_data * data, sample * outbuf, int32_t samples_to_do, int channels);
#endif

void decode_sdx2(VGMSTREAMCHANNEL * stream, sample * outbuf, int channelspacing, int32_t first_sample, int32_t samples_to_do);

void decode_ws(VGMSTREAM * vgmstream, int channel, sample * outbuf, int channelspacing, int32_t first_sample, int32_t samples_to_do);

#ifdef VGM_USE_MPEG
void decode_fake_mpeg2_l2(VGMSTREAMCHANNEL * stream,
        mpeg_codec_data * data,
        sample * outbuf, int32_t samples_to_do);
void decode_mpeg(VGMSTREAMCHANNEL * stream,
        mpeg_codec_data * data,
        sample * outbuf, int32_t samples_to_do, int channels);
#endif

#endif
