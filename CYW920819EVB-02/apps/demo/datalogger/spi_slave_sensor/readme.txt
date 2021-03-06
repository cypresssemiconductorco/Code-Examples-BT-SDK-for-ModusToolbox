-------------------------------------------------------------------------------
CE226537: SPI Slave Sensor Application
-------------------------------------------------------------------------------

Overview
--------

This code example requires two applications running on two separate
CYW920819EVB-02 kits - one to act as a dual SPI master and the other
to act as a SPI slave (e.g. a temperature sensor with a SPI
interface). This is the SPI slave application. It demonstrates how to
use the SPI driver interface to send and receive bytes or a stream of
bytes over the SPI hardware as a slave. Here, the kit emulates a SPI
based temperature sensor.

Instructions to evaluate the CE
---------------------------
To demonstrate the app, follow the steps:
1. Flywire the following connections on two CYW920819EVB-02 kits
    Function   |       SPI Master      |       SPI Slave
    CLK        |WICED_P15   J3.8    D10|WICED_P09   J3.5    D13
    MISO       |WICED_P14   J3.10   D08|WICED_P17   J3.6    D12
    MOSI       |WICED_P13   J12.6   A05|WICED_P14   J3.10   D08
    CS         |WICED_P12   J12.5   A04|WICED_P15   J3.8    D10
    GND        |GND                    |GND
2. Plug the two WICED evaluation kits into your computer.
3. Build and download the application "dual_spi_master" to one kit and
   "spi_sensor_slave" to the other kit.
4. Use a terminal emulation tool such as Tera Term to open the serial port
   of WICED Peripheral UART with the below settings for both kits to view
   log/trace messages.
   [Baud rate: 115,200bps; Data: 8 bits; Parity: None; Stop bit: 1 bit]
5. On startup, The SPI master prints the size of SFLASH and indicates that the
   threads handling SPI sensor and SFLASH have started.
6. The SPI slave prints received commands and the data sent on its serial
   port. After authenticating the slave, the master requests temperature
   readings from the slave every one second.
7. Press the button on the master to read the stored temperature readings along
   with their timestamps.

   For more details on this code example including the design and implementation,
   please refer to the CE document available under this example's folder at GitHub
   (https://github.com/cypresssemiconductorco/Code-Examples-BT-20819A1-1.0-for-ModusToolbox-1.1)

   For more details on the hardware connections in the CYW920819EVB-02 Evaluation
   kit, please refer to the ModusToolbox CYW920819EVB-02 Evaluation Kit User Guide.pdf
   (http://www.cypress.com/CYW920819EVB-02)

-------------------------------------------------------------------------------