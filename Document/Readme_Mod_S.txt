EpgTimerSrv�����ł̉��ϐ���

���T�v��
EpgTimerSrv.exe�ȊO�Ɏ����I�ȕύX�͂���܂���B�t��EpgTimerSrv.exe�͌݊����ێ���
����͈͂ł��ƓO��I�ɐ������Ă��܂��B
�T�[�r�X�Ƃ��Ďg�p���Ȃ��ꍇ�AEpgTimer.exe��EpgTimerTask.exe�̏풓�͕s�v�ɂȂ��
�����BEpgTimerSrv.exe���^�X�N�g���C�A�C�R����\�����A�X���[�v�m�F�_�C�A���O��`
���[�i�E�o�b�`�𒼐ڋN�����܂��B
HTTP�T�[�o�@�\�̓t���@�\��Web�T�[�o��g�ݍ��݁A�y�[�W������Lua�ɔC���܂����B�ڍ�
�� ��q�uCivetweb�̑g�ݍ��݂ɂ��āv���Q�Ƃ��Ă��������B

���̃t�@�C���ł�Readme_Mod.txt���炳��ɉ��ς�������������������܂��B

��Readme_EpgTimer.txt��
����ȋ@�\
  �T�[�o�[�A�g�@�\�͔p�~���܂����B

���^��ݒ�
  �E�Ǐ]
    �v���O�����\��ɐ؂�ւ���̂Ǝ����I�ȈႢ���قƂ�ǖ������߁A�u�C�x���g����
    �[�Ǐ]�v�ɈӖ���ύX���܂����B

���ݒ�
  ������ݒ�^�u
    ���^�擮��
      �Ebat���s����
        �p�~���܂���(�o�b�`���ƂɎw��)�B
    ���\����Ǘ�����
      �E�C�x���g�����[�ɂ��Ǐ]���s��
        �p�~���܂���(�\�񂲂ƂɎw��)�B
      �EEPG�f�[�^�ǂݍ��ݎ��A�\�񎞂Ɣԑg�����ς���Ă���Δԑg����ύX����
        �p�~���܂���(��ɃI��)�B
      �EEPG�f�[�^�ǂݍ��ݎ��AEventID�̕ύX���J�n�A�I�����Ԃ݂̂ŏ�������
        �p�~���܂���(��ɃI�t)�B
      �E���ꕨ���`�����l���ŘA���ƂȂ�`���[�i�[�̎g�p��D�悷��
        �p�~���܂���(��ɃI��)�B
    �����̑�
      �EEPG�擾���ɕ����g���Ԃ�PC���v�𓯊�����
        �d�l�ύX�ł͂���܂��񂪁A�����ɂ͊Ǘ��Ҍ����ł͂Ȃ�SE_SYSTEMTIME_NAME��
        ��(�R���g���[���p�l�������[�J���Z�L�����e�B�|���V�[���V�X�e�������̕ύX)
        ���K�v�ł��B���f�͔C���܂����Ǘ��ҋN��������������[�U�ɂ��̓�����^��
        ��ق����}�V�ȋC�����܂��B
      �EEpgTimerSrv���풓������y�ǉ��z
        �E�^�X�N�g���C�A�C�R����\������y�ǉ��z
        �E�o���[���`�b�v�ł̓���ʒm��}������y�ǉ��z
      �E�T�[�o�[�ԘA�g
        �p�~���܂����B
  ���O���A�v���P�[�V����
    ��Twitter�ݒ�^�u
      �p�~���܂����B

���X�^���o�C�A�x�~��Ԃւ̈ڍs
  ���̗\��^��܂���EPG�擾�ɑ΂��āA����ݒ�Ŏw�肵��"���A�����J�n����"+8���A
  ���}�������Ŏw�肵�����Ԉȏ�̊J��������ꍇ�Ɉڍs���܂��B

���^���̃o�b�`�t�@�C�����s�̎d�l
  �o�b�`�̃v���Z�X�D��x��"�ʏ�ȉ�"(BELOW_NORMAL_PRIORITY_CLASS)�Ŏ��s���܂��B
  �ȉ��̊g�����߂𗘗p�ł��܂��y�ǉ��z�B�g�����߂̓o�b�`�t�@�C�����̂ǂ����ɒ���
  �L�q���Ă�������(rem�R�����g���ǂ�Ȍ`���ł�OK)�B
  _EDCBX_BATMARGIN_={bat���s����(��)}
    ���̃}�[�W���ȏ�^��\�肪�Ȃ��Ƃ��Ɏ��s�J�n���܂��B�f�t�H���g��0�ł��B
  _EDCBX_HIDE_
    �E�B���h�E���\���ɂ��܂��B
  _EDCBX_NORMAL_
    �E�B���h�E���ŏ������܂���B
  _EDCBX_DIRECT_
    �}�N����u���ł͂Ȃ����ϐ��œn���Ē��ڎ��s���܂��B�}�N�����͂�$��%�ɂȂ邾
    ���ł����Astart /wait���g���ĕʂ̃X�N���v�g�ɏ����������p���Ƃ��ɕ֗��ł��B
    �܂��A�ȉ���ۏ؂��܂�:
      �EEpgTimerSrv.exe�̂���t�H���_��"EpgTimer_Bon_RecEnd.bat"�����Ȃ�
      �EEpgTimer.exe���o�R����Ԑڎ��s�͂��Ȃ�
      �E�o�b�`�̃J�����g�f�B���N�g���͂��̃o�b�`�̂���t�H���_�ɂȂ�
  �擾�ł���}�N���ɂ��Ă͈ȉ���3�s�̃R�}���h�Ŋm�F����Ǝ����葁���ł��B
    >rem _EDCBX_DIRECT_
    >set
    >pause

���Ǐ]�̎d�l
  �����܂����������ɂ��EventID�ύX�ɑ΂���Ǐ]�����͈�؍s���܂���B

��Twitter�@�\
  Twitter�@�\�͔p�~���܂����B�����EpgTimerSrv.exe�̂���t�H���_�ɒu���ꂽ�ȉ�
  �̃o�b�`�t�@�C�������s���܂��y�ǉ��z�B�擾�ł���}�N���͏]���Ƃ������������ł�
  (NEW�n�}�N���͖��O����NEW����菜���Ă��܂�)�BPostRecEnd.bat�ȊO��$ReserveID$(
  �\��ID)�A$RecMode$(�^�惂�[�h0=�S�T�[�r�X�`4=����)�A$ReserveComment$(�R�����g)
  ���擾�ł��܂��B
  �EPostAddReserve.bat : �\���ǉ������Ƃ�(����������)
    �EEPG�����\��̂Ƃ�$ReserveComment$��"EPG�����\��"�Ƃ���������Ŏn�܂�܂�
  �EPostChgReserve.bat : �\���ύX�����Ƃ�(����������)
    �E$SYMDHMNEW$�`$SEYMDHM28NEW$�͎擾�ł��܂���(�K�v���ǂ����������c)
  �EPostRecStart.bat : �^����J�n�����Ƃ�
  �EPostRecEnd.bat : �^����I�������Ƃ�
    �E�擾�ł���}�N���͘^���o�b�`�Ɗ��S�ɓ����ł�
  �܂��A�C�x���g�������Ɉȉ��̃o�b�`�t�@�C�������s���܂��B
  �EPostNotify.bat : �X�V�ʒm������ꂽ�Ƃ�
    �E�擾�ł���}�N����$NotifyID$�݂̂ł�
      �E$NotifyID$(1=EPG�f�[�^�X�V, 2=�\����X�V, 3=�^�挋�ʏ��X�V)
  �o�b�`�d�l�͘^���o�b�`�Ɠ����ł����A_EDCBX_BATMARGIN_�͖����ł��B�܂��A
  _EDCBX_DIRECT_�łȂ��Ƃ��̈ꎞ�t�@�C������"EpgTimer_Bon_Post.bat"�ł��B
  ���s�͒���ɍs���܂�(�݂��ɕ�����s���Ȃ�)�B�܂��A���s���_�Ŋe�X�̓��삪������
  �Ă���(�\��t�@�C�����X�V�ς݂ł���)���Ƃ�ۏ؂��܂��B
  ini�t�H���_�ɊȒP�ȎQ�l�p�o�b�`�t�@�C����p�ӂ��܂����B

��Q&A
�E�\�񊄂�U��̎d�����ڂ���
  �S�\����J�n���ԂŃ\�[�g���A�\��̂Ȃ����ԑт��Ƃɑg�����A�g���Ƃ̗\��ɑ΂���
  "�\��D��x>�J�n����(�I��D�掞�t��)>�\��ID"�̈�ӂȗD��x�����A�D��x���ɗ\
  ����`���[�i�Ɋ��蓖�Ă܂��B�����ŁA�D��x�����ƂɎ��ۂ̘^�掞�Ԃ��v�Z���A�Œ�
  �ƂȂ�`���[�i��I�т܂�(���������Ȃ�BonDriver�̗D��x��)�B�`���[�i�����w�莞
  �͂����őI�ׂ�`���[�i�����肳��邱�ƂɂȂ�܂��B�^�掞�Ԃ�0���Ȃ�`���[�i�s
  ���ƂȂ�܂��B

�E�J�n�ƏI�����ԏd�Ȃ��Ă���Ƃ��̓�����ڂ���
  �ʃ`�����l���̏ꍇ�A�O�ԑg�̗D��x�������Ƃ��͂��ꂪ�I���܂Ō�ԑg�̘^��͎n
  �܂�܂���B��ԑg�̗D��x�������Ƃ��́A���̊J�n20�b�O�ɑO�ԑg�̘^����I������
  ���B�}�[�W�����܂߂Ę^�掞�Ԃł��B�}�[�W���������̎d�l�͔p�~���܂����B

���Ǐ]�̎d�l(���̍��㏑��)
  �Ǐ]�����ɂ͑傫��2��ނ���܂��B
  1.EPG�f�[�^�ǂݍ��ݎ��ɁA�ǂݍ���EPG�f�[�^����Ǐ]���s��
    ������EPG�f�[�^��EpgTimer�̔ԑg�\�Ɠ������̂ł�
    �v���O�����\��A�����2.�ň�x�ł��ύX���ꂽ�\��͑ΏۊO�ł��B�Ǐ]����p����
    �[�^�͊J�n���ԁA�I�����ԁA����уC�x���g���ł��B

  2.�N������EpgDataCap_Bon.exe�̒~�ς��Ă���EPG�f�[�^����Ǐ]���s��
    �N�����̃`�����l���ƈقȂ�`�����l���̗\��A6���Ԉȏ��̗\��A�v���O�����\
    ��A����і����\��͑ΏۊO�ł��B�Ǐ]����p�����[�^�͊J�n���ԁA�I�����ԁA�C�x
    ���g���A����уC�x���g�����[�ł��B�C�x���g�����[�͌��ݔԑg(present)�̏���
    �݂𗘗p���čs���܂��B
    ���ݔԑg�̏I�����Ԃ�����ɂȂ����ꍇ�F
      ���ݔԑg�̗\�񂪘^��I��(�}�[�W���܂�)�܂�5����؂�^�C�~���O�ŁA5�����\
      ����������Ă����܂��B�I�����Ԗ���̂܂ܔԑg���I������ꍇ�A�ԑg�I������5
      �`10����ɘ^�悪�I��邱�ƂɂȂ�܂��B�I�����Ԃ��ēx���肷��΁A���莞�Ԃ�
      �ύX���܂��B

    ���ԑg(following)�̏I�����Ԃ�����ɂȂ����ꍇ�F
      ���ԑg�̗\�񂪘^��I��(�}�[�W���܂�)�܂�5����؂�^�C�~���O�ŁA5�����\��
      ���������Ă����܂��B�I�����Ԗ���̂܂܎��ԑg���؂�ւ�����ꍇ�A��q�́u��
      �݂ł����ł��Ȃ��ԑg�v�Ƃ��Ĉ����܂��B�I�����Ԃ��ēx���肷��΁A���莞�Ԃ�
      �ύX���܂��B
      �܂��A���̂Ƃ����݂ł����ł��Ȃ��ԑg�ɂ��Ă����Ԃ���܂�Ȃ��̂ŁA�����
      �̗\�񂪘^��I��(�}�[�W���܂�)�܂�5����؂�^�C�~���O�ŁA�^�摍���Ԃ�
      TuijyuHour�ɒB����܂ŁA5�����\����������Ă����܂��B���ԑg�̏I�����Ԃ�
      �ēx���肷��΁A�������~���܂��B���̔ԑg�����݂܂��͎��ԑg�ɂȂ�΁A����
      ���ԂɕύX���܂��B
      �ꕔ�̕����ǂŁA�����������̔ԑg�̃C�x���gID���ύX����邱�Ƃ�����܂��B
      ����ɑΏ����邽�߁A���݂܂��͎��ԑg�ɖ���Ǐ]���̗\��ƃC�x���g�������S��
      �v����C�x���g�����݂���ꍇ�Ɍ���A���̗\���ԑg�I�����Ԃ܂ŉ������܂��B

���Ǐ]����̃J�X�^�}�C�Y
  �ENoEpgTuijyuMin�͔p�~���܂���(���0)
  �EDuraChgMarginMin�͔p�~���܂���(���0)
  �ETuijyuHour�̃f�t�H���g��3���ԂɂȂ�܂���

���\�񊄂�U��̃A���S���Y���̕ύX
  �p�~���܂����B

���u���E�U����\���ł���悤�ɂ���
  �uCivetweb�̑g�ݍ��݂ɂ��āv���Q�ƁB

���^���bat�N�����̌`����ς���
  ��T�[�r�X���͏�ɍŏ����ŋN�����܂��B

�����ʒm���O�������I�Ƀt�@�C���ɕۑ�����
  EpgTimerSrv.ini��SET��SaveNotifyLog=1�Ƃ���ƁAEpgTimerSrv�̂���t�H���_��
  EpgTimerSrvNotifyLog.txt�ɂ��ۑ��ł��܂�(EpgTimerSrv�ɂ�钼�ڕۑ�)�y�ǉ��z�B

���f�o�b�O�o�͂��t�@�C���ɕۑ�����y�ǉ��z
  EpgTimerSrv.ini��SET��SaveDebugLog=1�Ƃ���ƁA�f�o�b�O�o��(OutputDebugStringW)
  �̓��e��EpgTimerSrv�̂���t�H���_��EpgTimerSrvDebugLog.txt�ɕۑ��ł��܂��B
  ��DLL����̃f�o�b�O�o�͂͑ΏۊO
  EpgDataCap_Bon.ini�ɂ��Ă����l�ɐݒ�ł��܂��B�������EpgDataCap_Bon.exe�̋N
  �����ɉ�����EpgDataCap_Bon_DebugLog-{�ԍ�}.txt�ƂȂ�܂��B

��DLNA��DMS�ۂ��@�\���g��
  �uCivetweb�̑g�ݍ��݂ɂ��āv���Q�ƁB

��Civetweb�̑g�ݍ��݂ɂ��ā�
HTTP�T�[�o�@�\�̊ȒP���ƃf�B���N�g���g���o�[�T�����X�̃o�O�C����ړI�ɁAEpgTimerSrv.exe��Civetweb��g�ݍ��݂܂����B
HTTP�T�[�o�@�\�͏]���ʂ�EpgTimerSrv.ini��EnableHttpSrv�L�[��1�ɂ���ƗL���ɂȂ�܂�(2�ɂ����EpgTimerSrv.exe�Ɠ����ꏊ�Ƀ��O�t�@�C�����o��)�B
�L���ɂ���ꍇ��EpgTimerSrv.exe�Ɠ����ꏊ��lua52.dll���K�v�ł��B�Ή�������̂�DL���Ă��������B
http://sourceforge.net/projects/luabinaries/files/5.2.3/Windows%20Libraries/Dynamic/
Civetweb�ɂ��Ă͖{�Ƃ̃h�L�������g�����Q�Ƃ��Ă�������(�p��)
https://github.com/bel2125/civetweb/tree/master/docs
SSL/TLS�𗘗p����ꍇ��EpgTimerSrv.exe�Ɠ����ꏊ��ssleay32.dll��libeay32.dll���K�v�ł��B���r���h(����)���邩�M���ł���ǂ���������肵�Ă��������B
�Ƃ肠���� http://www.openssl.org/related/binaries.html �ɂ��� http://indy.fulgan.com/SSL �œ�����m�F���Ă��܂��B

�uDLNA��DMS�ۂ��@�\�v��HTTP�T�[�o�ɓ������܂����B
ini�t�H���_�ɂ���dlna�ȉ���document_root�ɒu����EpgTimerSrv.ini��EnableDMS�L�[��1�ɂ���ƗL���ɂȂ�܂��B

�ȉ��̐ݒ��Civetweb�̃f�t�H���g����ύX���Ă��܂�:
  access_control_list: EpgTimerSrv.ini��HttpAccessControlList�L�[�̒l(�f�t�H���g��"+127.0.0.1")
    ���]���ʂ肷�ׂẴA�N�Z�X��������ꍇ��"+0.0.0.0/0"�Ƃ���
  extra_mime_types: "ContentTypeText.txt"�ɒǉ�����MIME�^�C�v(�]���ʂ�)
  listening_ports: EpgTimerSrv.ini��HttpPort�L�[�̒l(�]���ʂ�f�t�H���g��5510)
    �������|�[�g�w����@�Ȃǂ͖{�ƃh�L�������g�Q��
  document_root: EpgTimerSrv.ini��HttpPublicFolder�L�[�̒l(�f�t�H���g��EpgTimerSrv.exe�Ɠ����ꏊ��"HttpPublic")
    ��document_root�ɂ͓��{��(�}���`�o�C�g)�������܂܂Ȃ�����
  num_threads: 3
  lua_script_pattern: "**.lua$|**.html$|*/api/*$" (�܂�.html�t�@�C����Lua�X�N���v�g�����ɂȂ�)
    ��REST API�Ƃ̌݊��̂��߁Adocument_root������api�t�H���_�ɂ���t�@�C����Lua�X�N���v�g�����ɂȂ�
  ssl_certificate: listening_ports�ɕ���'s'���܂ނƂ��AEpgTimerSrv.exe�Ɠ����ꏊ��"ssl_cert.pem"
  global_auth_file: EpgTimerSrv.exe�Ɠ����ꏊ��"glpasswd"

document_root�ȉ��̃t�H���_��t�@�C�������J�Ώۂł�(�F�X�V�ׂ�)�B
ini�t�H���_�Ɍ�����ۂ����������Lua�X�N���v�g��ǉ������̂ŎQ�l�ɂ��Ă��������B

�O�����J�͐������܂��񂪁A�������s���ꍇ�͖{�ƃh�L�������g�ɏ]��"glpasswd"���쐬��(�t�H���_���Ƃ�.htpasswd�͕s�m��)�A
SSL/TLS�𗘗p���Ă��������B����ɏd�v�ȃf�[�^����u�����Ă��������B
Civetweb�ŃZ�L�����e�B���m�ۂ���Ă��邾�낤�Ɣ��f�ł����͔̂F�؏����܂ł̕s���A�N�Z�X�ϐ��݂̂ł��B
DoS�ϐ��͊��҂ł��܂��񂵁A�p�X�����̌��J�T�[�o�Ƃ��Ă̗��p�������߂ł��܂���B

"ssl_cert.pem"(�閧��+���ȏ����ؖ���)�̍쐬�菇�͖{�ƃh�L�������g�ɏ]��Ȃ��ق����ǂ��ł��B�Í����x��
�uSSL/TLS�Í��ݒ�K�C�h���C���v(https://www.ipa.go.jp/security/vuln/ssl_crypt_config.html)�𖞂����Ă��܂���B
(�쐬�菇��A�L�ۂ݂ɂ��Ȃ�����)
> openssl genrsa -out server.key 2048
> openssl req -new -key server.key -out server.csr
> openssl x509 -req -days 3650 -sha256 -in server.csr -signkey server.key -out server.crt
> copy server.crt ssl_cert.pem
> type server.key >> ssl_cert.pem

"glpasswd"�̊ȒP�ȍ���(���[�U��root�A�p�X���[�htest)
> set <nul /p "x=root:mydomain.com:test" | openssl md5
  (�o�͂����32�����̃n�b�V���l�Ńp�X���[�h���㏑����)
> set <nul /p "x=root:mydomain.com:351eee77bbb11db9fef4870b0d78b061" >glpasswd

Lua��mg.write()�ɂ��āA���ۂ̃u�[���A����Ԃ��悤�g�����Ă��܂��B
�@������Civetweb���ɗv�]�������ł����A���̉ߒ��Ŏd�l���ς��(�Ⴆ�ΐ�����Ԃ��悤�ɂȂ�Ȃ�)�\��������܂��B

��Lua edcb�O���[�o���ϐ��̎d�l��
�@�\��EpgTimerSrv�{�̂ɂ��郁�\�b�h�Ƃقړ����Ȃ̂�
C++��ǂ߂�l��EpgTimerSrvMain.cpp�ɂ�������𒭂߂�Ɨǂ���������Ȃ��B

[����̒�`]
B:�u�[���A��
I:����
S:������
TIME:�W�����C�u����os.date('*t')���Ԃ��e�[�u���Ɠ���
<�e�[�u����>:��q�Œ�`����e�[�u��
�`�̃��X�g:�Y����1����N�܂�N�́`��Y�������Ɋi�[�����e�[�u��

htmlEscape:I
  ������ԋp�l�̎��̎Q�ƕϊ����w������t���O(+1=amp,+2=lt,+4=gt,+8=quot,+16=apos)
  �����l��0�B
  �Ⴆ��edcb.htmlEscape=15�Ƃ����'<&"�e�X�g>'��'&lt;&amp;&quot;�e�X�g&gt;'�̂悤�ɕϊ������B

S GetGenreName( �啪��*256+������:I )
  STD-B10�̃W�������w��̕�������擾����
  �����ނ�0xFF�Ƃ���Ƒ啪�ނ̕����񂪕Ԃ�B
  ���݂��Ȃ��Ƃ��󕶎���B
  �Ⴆ��edcb.GetGenreName(0x0205)��'�O�����E����'���Ԃ�B

S GetComponentTypeName( �R���|�[�l���g���e*256+�R���|�[�l���g���:I )
  STD-B10�̃R���|�[�l���g�L�q�q�̕�������擾����
  ���݂��Ȃ��Ƃ��󕶎���B
  �Ⴆ��edcb.GetComponentTypeName(0x01B1)��'�f��1080i(1125i)�A�A�X�y�N�g��4:3'���Ԃ�B

S|nil Convert( to�����R�[�h:S, from�����R�[�h:S, �ϊ��Ώ�:S )
  �����R�[�h�ϊ�����
  ���p�ł��镶���R�[�h��'utf-8'�܂���'cp932'�̂݁B
  �ϊ��Ɏ��s����Ƌ󕶎���A���p�ł��Ȃ������R�[�h���w�肷���nil���Ԃ�B
  ��Fos.execute(edcb.Convert('cp932','utf-8','echo �\���|�� & pause'))

Sleep( �~���b:I )
  �X���b�h�̎��s�𒆒f����

S GetPrivateProfile( �Z�N�V����:S, �L�[:S, ����l:S|I|B, �t�@�C����:S )
  Win32API��GetPrivateProfileString���Ă�
  ����l��B�̂Ƃ���true=1�Afalse=0�ɕϊ������B
  �t�@�C������EDCB�t�H���_�z���ɒu���ꂽini�t�@�C���𑊑Ύw�肷��B
  ��Fv=0+edcb.GetPrivateProfile('SET','HttpPort',5510,'EpgTimerSrv.ini')
  �t�@�C������'Setting\\'�Ŏn�܂�Ƃ��́u�ݒ�֌W�ۑ��t�H���_�v�Ƀ��_�C���N�g�����B
  �߂�l��UTF-16���Z��8192�����ȏ�̕����͐؂�̂Ă���B
  ����I�Ɉȉ��̈�����EDCB�t�H���_�̃p�X���Ԃ�B
  edcb.GetPrivateProfile('SET','ModulePath','','Common.ini')

B WritePrivateProfile( �Z�N�V����:S, �L�[:S|nil, �l:S|I|B|nil, �t�@�C����:S )
  Win32API��WritePrivateProfileString���Ă�
  �l��B�̂Ƃ���true=1�Afalse=0�ɕϊ������B
  �L�[�܂��͒l��nil�̂Ƃ��̋�����WritePrivateProfileString�Ɠ����B
  �t�@�C�����ɂ��Ă�GetPrivateProfile()�Ɠ����B
  �������߂��Ƃ�true���Ԃ�B

B ReloadEpg()
  EPG�ēǂݍ��݂��J�n����
  �J�n�ł����Ƃ�true���Ԃ�B

ReloadSetting( �l�b�g���[�N�ݒ��ǂݍ��ނ�:B )
  �ݒ���ēǂݍ��݂���
  ������true�ɂ����EpgTimerSrv.ini�̈ȉ��̃L�[���ǂݍ��܂��(HTTP�T�[�o�͍ċN������)�B
  EnableTCPSrv, TCPPort, EnableHttpSrv, HttpPort, HttpPublicFolder, HttpAccessControlList, EnableDMS

B EpgCapNow()
  EPG�擾�J�n��v������
  �v�����󂯓����ꂽ�Ƃ�true���Ԃ�B

<�`�����l�����>�̃��X�g GetChDataList()
  �`�����l���X�L�����œ����`�����l�����̃��X�g���擾����(onid>tsid>sid�\�[�g)
  �܂�"Setting\ChSet5.txt"�̓��e�B

<�T�[�r�X���>�̃��X�g|nil GetServiceList()
  EPG�擾�œ����S�T�[�r�X�����擾����(onid>tsid>sid�\�[�g)
  �v���Z�X�N�������nil(���s)�B

{minTime:TIME, maxTime:TIME}|nil GetEventMinMaxTime( �l�b�g���[�NID:I, TSID:I, �T�[�r�XID:I )
  �w��T�[�r�X�̑S�C�x���g�ɂ��čŏ��J�n���Ԃƍő�J�n���Ԃ��擾����
  �J�n���Ԗ���łȂ��C�x���g��1���Ȃ����nil�B

<�C�x���g���>�̃��X�g|nil EnumEventInfo( {onid:I|nil, tsid:I|nil, sid:I|nil}�̃��X�g [, {startTime:TIME|nil, durationSecond:I|nil} ] )
  �w��T�[�r�X�̑S�C�x���g�����擾����(onid>tsid>sid>eid�\�[�g)
  ���X�g�̂����ꂩ�Ƀ}�b�`�����T�[�r�X�ɂ��Ď擾����B
  onid,tsid,sid�t�B�[���h���e�Xnil�Ƃ���ƁA�e�X���ׂĂ�ID�Ƀ}�b�`����B
  �v���Z�X�N�������nil(���s)�B
  ��2�����ɃC�x���g�̊J�n���Ԃ͈̔͂��w��ł���B
  �E�J�n���Ԃ�startTime�ȏ�`startTime+durationSecond�����̃C�x���g�Ƀ}�b�`
  �E��e�[�u���̂Ƃ��͊J�n���Ԗ���̃C�x���g�Ƀ}�b�`

<�C�x���g���>�̃��X�g|nil SearchEpg( <�����\�񌟍�����> )
<�C�x���g���>|nil SearchEpg( �l�b�g���[�NID:I, TSID:I, �T�[�r�XID:I, �C�x���gID:I )
  �C�x���g������������
  1�����̂Ƃ���<�����\�񌟍�����>�Ƀ}�b�`�����C�x���g���擾����B
  4�����̂Ƃ��͎w��C�x���g���擾����B�Ȃ����nil���Ԃ�B
  �v���Z�X�N�������nil(���s)�B

B AddReserveData( <�\����> )
  �\���ǉ�����
  ���s����false�B

B ChgReserveData( <�\����> )
  �\���ύX����
  ���s����false�B

DelReserveData( �\��ID:I )
  �\����폜����

<�\����>�̃��X�g GetReserveData()
<�\����>|nil GetReserveData( �\��ID:I )
  �\����擾����(reserveID�\�[�g)
  �������̂Ƃ��͑S�\����擾����B
  1�����̂Ƃ��͎w��\����擾����B�Ȃ����nil���Ԃ�B

<�^��ςݏ��>�̃��X�g GetRecFileInfo()
<�^��ςݏ��>|nil GetRecFileInfo( ���ID:I )
  �^��ςݏ����擾����(id�\�[�g)
  �������̂Ƃ��͑S�����擾����B
  1�����̂Ƃ��͎w������擾����B�Ȃ����nil���Ԃ�B

DelRecFileInfo( ���ID:I )
  �^��ςݏ����폜����

<�`���[�i�\����>�̃��X�g GetTunerReserveAll()
  �`���[�i���Ƃ̗\��̊��蓖�ď����擾����(tunerID�\�[�g)
  �������A���X�g�̍ŏI�v�f�̓`���[�i�s���̗\���\���B

<�^��v���Z�b�g>�̃��X�g EnumRecPresetInfo()
  �^��v���Z�b�g�����擾����(id�\�[�g)
  ���Ȃ��Ƃ��f�t�H���g�v���Z�b�g(id==0)�͕K���Ԃ�B

<�����\��o�^���>�̃��X�g EnumAutoAdd()
  �����\��o�^�����擾����(dataID�\�[�g)

<�����\��(�v���O����)�o�^���>�̃��X�g EnumManuAdd()
  �����\��(�v���O����)�o�^�����擾����(dataID�\�[�g)

DelAutoAdd( �o�^ID:I )
  �����\��o�^�����폜����

DelManuAdd( �o�^ID:I )
  �����\��(�v���O����)�o�^�����폜����

B AddOrChgAutoAdd( <�����\��o�^���> )
  �����\��o�^����ǉ�/�ύX����
  dataID�t�B�[���h��0�̂Ƃ��ǉ��̓���ɂȂ�B
  ���s����false�B

B AddOrChgManuAdd( <�����\��(�v���O����)�o�^���> )
  �����\��(�v���O����)�o�^����ǉ�/�ύX����
  dataID�t�B�[���h��0�̂Ƃ��ǉ��̓���ɂȂ�B
  ���s����false�B

I GetNotifyUpdateCount( �ʒmID:I )
  �X�V�ʒm�̃J�E���^���擾����
  0����n�܂��ăC�x���g���������邽�т�1���������鐔�l���Ԃ�B
  �擾�ł��Ȃ��ʒmID���w�肷���-1���Ԃ�B
  �ʒmID:
    1=EPG�f�[�^���X�V���ꂽ
    2=�\���񂪍X�V���ꂽ
    3=�^��ςݏ�񂪍X�V���ꂽ
    4=�����\��o�^��񂪍X�V���ꂽ
    5=�����\��(�v���O����)�o�^��񂪍X�V���ꂽ

<�t�@�C�����>�̃��X�g ListDmsPublicFile()
  (document_root)/dlna/dms/PublicFile�ɂ���t�@�C�������X�g����
  �uDLNA��DMS�ۂ��@�\�v�p�B

���e�[�u����`��
<�`�����l�����>={
  onid:I=�l�b�g���[�NID
  tsid:I=TSID
  sid:I=�T�[�r�XID
  serviceType:I=�T�[�r�X�^�C�v
  partialFlag:B=�����M�T�[�r�X(�����Z�O)���ǂ���
  serviceName:S=�T�[�r�X��
  networkName:S=�l�b�g���[�N��
  epgCapFlag:B=EPG�f�[�^�擾�Ώۂ��ǂ���
  searchFlag:B=�������̃f�t�H���g�����ΏۃT�[�r�X���ǂ���
}

<�T�[�r�X���>={
  onid:I=�l�b�g���[�NID
  tsid:I=TSID
  sid:I=�T�[�r�XID
  service_type:I=�T�[�r�X�`�����
  partialReceptionFlag:B=�����M�T�[�r�X(�����Z�O)���ǂ���
  service_provider_name:S=���ƎҖ�
  service_name:S=�T�[�r�X��
  network_name:S=�l�b�g���[�N��
  ts_name:S=TS��
  remote_control_key_id:I=�����R���L�[����
}

<�C�x���g���>={
  onid:I=�l�b�g���[�NID
  tsid:I=TSID
  sid:I=�T�[�r�XID
  eid:I=�C�x���gID
  startTime:TIME|nil=�J�n����(�s���̂Ƃ�nil)
  durationSecond:I|nil=������(�s���̂Ƃ�nil)
  freeCAFlag:B=�m���X�N�����u���t���O
  shortInfo:{
    event_name:S=�C�x���g��
    text_char:S=���
  }|nil=EPG��{���(�Ȃ��Ƃ�nil�A�ȉ����l)
  extInfo:{
    text_char:S=�ڍ׏��
  }|nil=EPG�g�����
  contentInfoList:{
    content_nibble:I=�啪��*256+������
    user_nibble:I=�Ǝ��W�������啪��*256+�Ǝ��W������������
  }�̃��X�g|nil=EPG�W���������
  componentInfo:{
    stream_content:I=�R���|�[�l���g���e
    component_type:I=�R���|�[�l���g���
    component_tag:I=�R���|�[�l���g�^�O
    text_char:S=�R���|�[�l���g�L�q
  }|nil=EPG�f�����
  audioInfoList:{
    stream_content:I=�ȉ��ASTD-B10�����R���|�[�l���g�L�q�q���Q��
    component_type:I=*
    component_tag:I=*
    stream_type:I=*
    simulcast_group_tag:I=*
    ES_multi_lingual_flag:B=*
    main_component_flag:B=*
    quality_indicator:I=*
    sampling_rate:I=*
    text_char:S=*
  }�̃��X�g|nil=EPG�������
  eventGroupInfo:{
    group_type:I=�O���[�v��ʁB�K��1(�C�x���g���L)
    eventDataList:{onid:I, tsid:I, sid:I, eid:I}�̃��X�g
  }|nil=EPG�C�x���g�O���[�v���
  eventRelayInfo:{
    group_type:I=�O���[�v���
    eventDataList:{onid:I, tsid:I, sid:I, eid:I}�̃��X�g
  }|nil=EPG�C�x���g�O���[�v(�����[)���
}

<�\����>={
  title:S=�ԑg��
  startTime:TIME=�^��J�n����
  durationSecond:I=�^�摍����
  stationName:S=�T�[�r�X��
  onid:I=�l�b�g���[�NID
  tsid:I=TSID
  sid:I=�T�[�r�XID
  eid:I=�C�x���gID
  comment:S=�R�����g
  reserveID:I=�\��ID
  overlapMode:I=���Ԃ���
  startTimeEpg:TIME=�\�񎞂̊J�n����
  recSetting:<�^��ݒ�>=�^��ݒ�
}

<�^��ݒ�>={
  recMode:I=�^�惂�[�h
  priority:I=�D��x
  tuijyuuFlag:B=�C�x���g�����[�Ǐ]���邩�ǂ���
  serviceMode:I=�����Ώۃf�[�^���[�h
  pittariFlag:B=�҂�����?�^��
  batFilePath:S=�^���BAT�t�@�C���p�X
  suspendMode:I=�x�~���[�h
  rebootFlag:B=�^���ċN������
  startMargin:I|nil=�^��J�n���̃}�[�W��(�f�t�H���g�̂Ƃ�nil)
  endMargin:I|nil=�^��I�����̃}�[�W��(�f�t�H���g�̂Ƃ�nil)
  continueRecFlag:B=�㑱����T�[�r�X���A����t�@�C���Ř^��
  partialRecFlag:I=����CH�ɕ�����M�T�[�r�X������ꍇ�A�����^�悷��(=1)����(=0)��
  tunerID:I=�����I�Ɏg�pTuner���Œ�
  recFolderList={
    recFolder:S=�^��t�H���_
    writePlugIn:S=�o��PlugIn
    recNamePlugIn:S=�t�@�C�����ϊ�PlugIn
  }�̃��X�g=�^��t�H���_�p�X
  partialRecFolder={
    (recFolderList�Ɠ���)
  }�̃��X�g=������M�T�[�r�X�^��̃t�H���_
}

<�^��ςݏ��>={
  id:I=���ID
  recFilePath:S=�^��t�@�C���p�X
  title:S=�ԑg��
  startTime:T=�J�n����
  durationSecond:I=�^�掞��
  serviceName:S=�T�[�r�X��
  onid:I=�l�b�g���[�NID
  tsid:I=TSID
  sid:I=�T�[�r�XID
  eid:I=�C�x���gID
  drops:I=�h���b�v��
  scrambles:I=�X�N�����u����
  recStatus:I=�^�挋�ʂ̃X�e�[�^�X
  startTimeEpg:T=�\�񎞂̊J�n����
  comment:S=�R�����g
  programInfo:S=.program.txt�t�@�C���̓��e
  errInfo:S=.err�t�@�C���̓��e
  protectFlag:B=�v���e�N�g
}

<�`���[�i�\����>={
  tunerID:I=�`���[�iID
  tunerName:S=BonDriver�t�@�C����
  reserveList:�\��ID:I�̃��X�g=���̃`���[�i�Ɋ��蓖�Ă�ꂽ�\��
}

<�^��v���Z�b�g>={
  id:I=�v���Z�b�gID
  name:S=�v���Z�b�g��
  recSetting:<�^��ݒ�>=�v���Z�b�g�^��ݒ�
}

<�����\��o�^���>={
  dataID:I=�o�^ID
  addCount:I=�\��ǉ��J�E���g(�Q�l���x)�B�o�^����nil�ŗǂ�
  searchInfo:<�����\�񌟍�����>=��������
  recSetting:<�^��ݒ�>=�^��ݒ�
}

<�����\�񌟍�����>={
  ### �ȉ��̃v���p�e�B��EnumAutoAdd�Ȃǂ̎擾�n���\�b�h��nil�ɂȂ邱�Ƃ͂Ȃ�
  andKey:S=�L�[���[�h
  notKey:S=NOT�L�[���[�h
  regExpFlag:B|nil=���K�\�����[�h(�ȗ���false)
  titleOnlyFlag:B|nil=�ԑg���̂݌����Ώۂɂ���(�ȗ���false)
  aimaiFlag:B|nil=�����܂��������[�h(�ȗ���false)
  notContetFlag:B|nil=�ΏۃW������NOT����(�ȗ���false)
  notDateFlag:B|nil=�Ώۊ���NOT����(�ȗ���false)
  freeCAFlag:I|nil=�X�N�����u������(0=����Ȃ�(�ȗ���),1=�����̂�,2=�L���̂�)
  chkRecEnd:B|nil=�^��ς��̃`�F�b�N����(�ȗ���false)
  chkRecDay:I|nil=�^��ς��̃`�F�b�N�Ώۊ���(�ȗ���0)
  contentList:{
    content_nibble:I=�啪��*256+������
  }�̃��X�g=�ΏۃW������
  dateList:{
    startDayOfWeek:I=�����J�n�j��(0=��,1=��...)
    startHour:I=�J�n��
    startMin:I=�J�n��
    endDayOfWeek:I=�����I���j��(0=��,1=��...)
    endHour:I=�I����
    endMin:I=�I����
  }�̃��X�g|nil=�Ώۊ���(�ȗ����󃊃X�g)
  serviceList:{
    onid:I=�l�b�g���[�NID
    tsid:I=TSID
    sid:I=�T�[�r�XID
  }�̃��X�g|nil=�ΏۃT�[�r�X(�ȗ����󃊃X�g)
  ### �ȉ��̃v���p�e�B�͎擾�n���\�b�h�ŏ��nil
  network:I|nil=�Ώۃl�b�g���[�N(+1=�n�f�W,+2=BS,+4=CS,+8=���̑��B�Y���T�[�r�X��serviceList�ɒǉ������)
  days:I|nil=�Ώۊ���(����������days*24���Ԉȓ��BSearchEpg�ȊO�ł͖��������)
  days29:I|nil=�Ώۊ���(����������days*29���Ԉȓ��B�݊��p�Ȃ̂Ŏg�p���Ȃ����ƁBSearchEpg�ȊO�ł͖��������)
}

<�����\��(�v���O����)�o�^���>={
  dataID:I=�o�^ID
  dayOfWeekFlag:I=�Ώۗj��(+1=��,+2=��...)
  startTime:I=�^��J�n����(00:00��0�Ƃ��ĕb�P��)
  durationSecond:I=�^�摍����
  title:S=�ԑg��
  stationName:S=�T�[�r�X��
  onid:I=�l�b�g���[�NID
  tsid:I=TSID
  sid:I=�T�[�r�XID
  recSetting:<�^��ݒ�>=�^��ݒ�
}

<�t�@�C�����>={
  id:I=���̃t�@�C�������X�g���ꂽ����
  name:S=�t�@�C����
  size:I=�t�@�C���T�C�Y
}