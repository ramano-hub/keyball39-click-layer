# QMK機能の有効化/無効化

# VIA/Remap対応
VIA_ENABLE = yes
REMAP_ENABLE = yes

# クリックレイヤー機能のソースファイル追加
SRC += features/auto_click_layer.c

# 容量削減のための機能無効化
EXTRAKEY_ENABLE = no      # オーディオ制御とシステム制御
CONSOLE_ENABLE = no       # デバッグコンソール
COMMAND_ENABLE = no       # デバッグと設定用のコマンド
NKRO_ENABLE = no          # Nキーロールオーバーサポート
BACKLIGHT_ENABLE = no     # キーバックライト
AUDIO_ENABLE = no         # オーディオ出力
RGB_MATRIX_ENABLE = no    # RGB マトリックス
RGB_MATRIX_DRIVER = no    # RGB マトリックスドライバ
MOUSE_SHARED_EP = yes     # マウス共有エンドポイント

# コンパイラ最適化オプション（容量削減）
EXTRAFLAGS += -Os
