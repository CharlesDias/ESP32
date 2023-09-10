# ESP32 Sample Code

## Adding user to dialout on Linux
The currently logged user should have read and write access the serial port over USB. On most Linux distributions, this is done by adding the user to dialout group with the following command:

```console
$ sudo usermod -a -G dialout $USER
```
