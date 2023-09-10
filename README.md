# ESP32 Sample Code

## Installing the Zephyr RTOS and ESP IDF tools

### Zephyr RTOS

Install the Zephyr RTOS. See the link https://docs.zephyrproject.org/latest/develop/getting_started/index.html#build-the-blinky-sample.

### ESP-IDF

Install the ESP-IDF. See the link https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/index.html.

### Setup the environment for ESP32

1. Run the command below to active the virtual environment.

```console
$ source ~/zephyrproject/.venv/bin/activate
```

2. Export Zephyr environment variables

```console
source ~/zephyrproject/zephyr/zephyr-env.sh
```

3. Export ESP-IDF toolchain setting for EPS32's Xtensa architecture.

```console
export ZEPHYR_TOOLCHAIN_VARIANT="espressif"
export ESPRESSIF_TOOLCHAIN_PATH="${HOME}/.espressif/tools/xtensa-esp32s3-elf/esp-12.2.0_20230208/xtensa-esp32s3-elf"
export PATH=$PATH:$ESPRESSIF_TOOLCHAIN_PATH/bin
```


## Adding user to dialout on Linux
The currently logged user should have read and write access the serial port over USB. On most Linux distributions, this is done by adding the user to dialout group with the following command:

```console
$ sudo usermod -a -G dialout $USER
```
