# The default keymap for sarasarado_ble

## layer list
|number|symbol|description|
|---|---|---|
|0|\_BL0|base layer|
|1|\_BL1|altanatibe layer|
|2|\_ML0|momentary layer 0 (eg. RAISE)|
|3|\_ML1|momentary layer 1 (eg. LOWER)|
|4|\_ML2|momentary layer 2 (eg. ADJUST)|
|5|\_ML3|momentary layer 3|

## addtional key list
|symbol|description|
|------|-----------|
|xEISU|EISU(�p��)|
|xKANA|KANA(����)|
|SEL_BLE|select BLE connection|
|SEL_USB|select USB connection|
|TOG_HID|toggle HID connection(BLE / USB)|
|m0EISU|tap EISU(�p��) / press layer #2|
|m0KANA|tap KANA(����) / press layer #2|
|m1EISU|tap EISU(�p��) / press layer #3|
|m1KANA|tap KANA(����) / press layer #3|
|m2EISU|tap EISU(�p��) / press layer #4|
|m2KANA|tap KANA(����) / press layer #4|
|m3EISU|tap EISU(�p��) / press layer #5|
|m3KANA|tap KANA(����) / press layer #5|

## m0SPC��m1ENT / ML0�`ML3
�p�~���ꂽ�BLT() / MO() �}�N�����g�p���邱�ƁB
LT()/MO()�}�N�����g�p���Ă�update_tri_layer�̋@�\�͓��삷��B
���̃��C���ƃL�[�R�[�h��TAP/LAYER�@�\�Ŏg�p���邱�Ƃ��ł���B

## define update_tri_layer function
update_tri_layer�����s����Ƃ��̃��C���[��TAPTERM.JSN�Ŏw�肷�邱�Ƃ��ł���B
ANY(24320)��ANY(24321)�Őݒ肵���l�̃��C���̗������������Ƃ��ɁAANY(24322)�Őݒ肳�ꂽ�l�̃��C�����I���ɂȂ�B

24320��0x5F00�Ō��ݎg�p����Ă��Ȃ�0x5C00-0x5FFF�͈̔͂ł���B

��

'''
{
    "tapping_term":{
	"ANY(24320)":2,
	"ANY(24321)":3,
	"ANY(24322)":4,
	"KC_NO":200
    }
}
'''
���C��2�ƃ��C��3���I���ɂȂ�ƃ��C��4���I���ɂȂ�(���̐ݒ�)