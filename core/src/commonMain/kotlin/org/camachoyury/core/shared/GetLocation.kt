package org.camachoyury.core.shared

import org.camachoyury.core.domain.model.KLocation


expect class GetLocation() {

    fun getCurrentLocation(): KLocation


}