/*
 * 03 May 2018:
 * - Added destruction of DNS and server after AsyncWiFiManager is done
 * - Use ArdunoJSON to send reply
 * - Fix MQTT reconnect issue when not connected to internet
 * - Broadcast MQTT HA status on MQTT connect
 * 
 * 04 May 2018
 * - Reply for McLighting web-request for mode now reads from SPIFFs << faster
 * - Fixed more MQTT hangups, max MQTT retries is set to 3
 * - Only send MQTT message if connected to MQTT server
 * - Fixed: When connection topology has changed, no need to re-broadcast << not true
 * - Added DNS support - retracted, not messing with DNS with mesh. messes with everything
 * 
 * 05 May 2018
 * - Retract "When connection topology has changed, no need to re-broadcast", it turns out we need to rebroadcast!
 * - Fix brighness 0-255 scale
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 */
