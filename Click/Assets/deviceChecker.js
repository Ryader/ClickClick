function IsMobileDevice() {
    const userAgent = navigator.userAgent || navigator.vendor || window.opera;
    return /android|iPad|iPhone/i.test(userAgent);
}

function CheckDeviceAndSendToUnity() {
    const isMobile = IsMobileDevice();
    if (isMobile) {
        unityInstance.SendMessage('DeviceScaleManager', 'SetScale', 'mobile');
    } else {
        unityInstance.SendMessage('DeviceScaleManager', 'SetScale', 'desktop');
    }
}
