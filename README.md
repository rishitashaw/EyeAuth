# EyeAuth: Arduino-Based FIDO2-Enabled Assistive Tech System

EyeAuth is an Arduino-based project that combines an Infrared Eye Blink Sensor with FIDO2 authentication to create an innovative assistive tech system. It allows individuals with motor disabilities or limited movement to securely and conveniently authenticate using their unique eye blink patterns.

## Features

- Integration of an Infrared Eye Blink Sensor with Arduino for eye blink detection.
- Utilizes the FIDO2 authentication standard for secure and passwordless authentication.
- Arduino board acts as the hardware platform for sensor connectivity and data processing.
- User enrollment process captures and associates eye blink patterns with FIDO2 device credentials.
- FIDO2 authentication flow combines eye blink data with FIDO2 credentials for user authentication.
- Secure communication with a FIDO2 server to handle authentication requests and responses.
- Error handling and fallback mechanisms for inconsistent eye blink data.
- Customizable and adaptable system that can be tailored to individual needs.

## Requirements

- Arduino board (compatible with the selected Infrared Eye Blink Sensor).
- Infrared Eye Blink Sensor (refer to the documentation for pin connections and usage).
- FIDO2 library or SDK with Arduino support.
- FIDO2 server infrastructure for authentication and credential management.

## Installation

1. Connect the Infrared Eye Blink Sensor to the Arduino board following the pin connections specified in the sensor's documentation.
2. Set up the FIDO2 server infrastructure and ensure it is accessible from the Arduino board.
3. Install the required FIDO2 library or SDK for Arduino.
4. Download or clone the EyeAuth project code to your local machine.
5. Open the Arduino IDE, import the EyeAuth project, and upload it to the Arduino board.

## Usage

1. Power on the EyeAuth system, ensuring the Arduino board and the Infrared Eye Blink Sensor are connected properly.
2. During the user enrollment process, capture and store the user's eye blink patterns and associate them with their FIDO2 device credentials.
3. To authenticate, the user performs eye blinks, which are detected by the Infrared Eye Blink Sensor.
4. The EyeAuth system combines the eye blink data with the FIDO2 device credentials and sends an authentication request to the FIDO2 server.
5. The FIDO2 server verifies the eye blink patterns and responds to the EyeAuth system with the authentication result.
6. Based on the server's response, the EyeAuth system grants or denies access to the user.

## Contributing

Contributions to the EyeAuth project are welcome! If you have any ideas, suggestions, or bug reports, please open an issue or submit a pull request.

## License

This project is licensed under the [Apache License 2.0](LICENSE).

## Acknowledgements

The EyeAuth project builds upon the FIDO2 authentication standard and leverages the capabilities of Arduino boards and Infrared Eye Blink Sensors. We express our gratitude to the developers and contributors of the FIDO2 libraries, Arduino community, and the creators of the Infrared Eye Blink Sensor for their valuable resources and support.


