function run(input, parameters) {
	
	let app = Application.currentApplication()
	app.includeStandardAdditions = true
	let originalVolume = app.getVolumeSettings().outputVolume*7/100
	app.setVolume(7)
	
	for(let i = 0;i<10;i++){
		app.displayNotification("Alarm Clock",{soundName :"ringtone"})
		delay(5)
	}
		app.setVolume(originalVolume)
}